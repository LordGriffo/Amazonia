#!/bin/sh

# Defina o endereço IP ou nome do servidor que contém o repositório
server="endereço_do_servidor"

# Defina o diretório do repositório no servidor
repo_directory="/var/www/html/repo"

# Adicione o repositório ao arquivo de repositórios do Alpine
echo "http://$server/repo" >> /etc/apk/repositories

# Atualize a lista de pacotes
apk update
