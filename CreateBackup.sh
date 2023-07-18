#!/bin/bash

# Obter a data atual no formato YYYY-MM-DD
data=$(date +%Y-%m-%d)

# Nome do arquivo de backup com base na data
nome_arquivo="backup_$data.tar"

# Diretório a ser feito o backup
diretorio_backup="/caminho/do/diretorio"

# Comando para criar o backup com o GNU Tar
tar -aczvf "$nome_arquivo" "$diretorio_backup"

# Exibir mensagem de conclusão
echo "Backup criado com sucesso: $nome_arquivo"
