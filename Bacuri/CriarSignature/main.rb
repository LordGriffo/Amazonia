require 'digest'
require 'date'
require 'find'

# Função para calcular o hash SHA-256 de um arquivo
def calcular_hash(arquivo)
  Digest::SHA256.file(arquivo).hexdigest
end

# Função para criar um arquivo de hash com o formato de data desejado e a extensão .txt.sig
def criar_arquivo_hash(data_atual)
  nome_arquivo_hash = data_atual.strftime("%H-%M-%d-%m-%Y") + '.txt.sig'
  File.open(nome_arquivo_hash, 'w') {} # Use 'w' para criar ou sobrescrever o arquivo
  nome_arquivo_hash
end

# Função para gerar hashes de todos os arquivos no diretório e subdiretórios no formato Debian
def gerar_hashes_em_diretorio(diretorio)
  hash_total = ''

  Find.find(diretorio) do |item|
    next if File.directory?(item)
    hash_arquivo = calcular_hash(item)
    hash_total << "SHA256 (#{File.basename(item)}) = #{hash_arquivo}\n"
  end

  hash_total
end

# Função principal
def main
  data_atual = DateTime.now
  nome_arquivo_hash = criar_arquivo_hash(data_atual)

  puts "Gerando hashes e salvando em #{nome_arquivo_hash}..."

  hash_total = gerar_hashes_em_diretorio('.')

  File.open(nome_arquivo_hash, 'a') do |arquivo| # Use 'a' para anexar ao arquivo
    arquivo.write(hash_total)
  end

  puts "Hashes gerados e salvos com sucesso em #{nome_arquivo_hash}"
end

# Chamar a função principal
main


#gem install digest
#gem install date
#gem install find
