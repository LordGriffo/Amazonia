require 'fileutils'

def copiar_recursivamente(origem, destino)
  FileUtils.mkdir_p(destino) unless File.exist?(destino)

  Dir.foreach(origem) do |item|
    next if ['.', '..'].include?(item)

    origem_path = File.join(origem, item)
    destino_path = File.join(destino, item)

    if File.directory?(origem_path)
      copiar_recursivamente(origem_path, destino_path)
    else
      FileUtils.cp(origem_path, destino_path, verbose: true)
    end
  end
end

if ARGV.length != 2
  puts "Uso: ruby copiar_recursivamente.rb <origem> <destino>"
  exit(1)
end

origem = ARGV[0]
destino = ARGV[1]

copiar_recursivamente(origem, destino)

puts "Cópia recursiva de #{origem} para #{destino} concluída."
