#!/bin/bash

# Defina o endereço IP ou nome do servidor que contém o repositório
server="endereço_do_servidor"

# Defina o diretório do repositório no servidor
repo_directory="/var/www/html/repo"

# Crie um arquivo de configuração do repositório
cat <<EOF | sudo tee /etc/yum.repos.d/myrepo.repo
[myrepo]
name=My Custom Repository
baseurl=http://$server/repo
enabled=1
gpgcheck=0
EOF
