require 'bundler/setup'
require 'bundler'
require 'webrick'

# Se é root
if Process.uid == 0
  puts "It's root."
else
  puts "Not is root."
  exit(1)
end

# Diretório que você deseja listar e servir arquivos para download
diretorio_base = Dir.pwd

# Configuração do servidor para usar threads
server = WEBrick::HTTPServer.new(
  Port: 80,
  DocumentRoot: diretorio_base,
  StartCallback: -> { Thread.new { WEBrick::HTTPServer.new.start } }
)

# Crie um manipulador para listar e permitir o download de arquivos
server.mount_proc '/' do |req, res|
  path = req.path[1..-1] # Remova a barra inicial

  if path.nil? || path.empty?
    res.body = "<html><body><h1>Arquivos disponíveis para download:</h1><ul>"

    Dir.entries(diretorio_base).each do |arquivo|
      next if arquivo == '.' || arquivo == '..'
      res.body += "<li><a href='/#{arquivo}'>#{arquivo}</a></li>"
    end

    res.body += '</ul></body></html>'
  else
    arquivo = File.join(diretorio_base, path)

    if File.exist?(arquivo) && !File.directory?(arquivo)
      res['Content-Disposition'] = "attachment; filename=#{File.basename(arquivo)}"
      res.body = File.read(arquivo)
    elsif File.directory?(arquivo)
      res.body = "<html><body><h1>Arquivos disponíveis para download no diretório '#{path}':</h1><ul>"

      Dir.entries(arquivo).each do |sub_arquivo|
        next if sub_arquivo == '.' || sub_arquivo == '..'
        res.body += "<li><a href='/#{File.join(path, sub_arquivo)}'>#{sub_arquivo}</a></li>"
      end

      res.body += '</ul></body></html>'
    else
      res.status = 404
      res.body = 'Arquivo não encontrado.'
    end
  end
end

# Inicie o servidor
trap('INT') { server.shutdown }
server.start
