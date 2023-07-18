#!/bin/bash

# Defina o endereço IP ou nome do servidor que contém o repositório
server="endereço_do_servidor"

# Defina o diretório do repositório no servidor
repo_directory="/var/www/html/repo"

# Adicione a chave GPG do repositório
wget -O - http://$server/repo/Release.gpg | sudo apt-key add -

# Crie um arquivo de configuração do repositório
cat <<EOF | sudo tee /etc/apt/sources.list.d/myrepo.list
deb http://$server/repo/ ./
EOF

# Atualize a lista de pacotes
sudo apt update
