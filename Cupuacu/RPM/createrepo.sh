#!/bin/bash

# Defina o diretório do repositório
repo_directory="/var/www/html/repo"

# Crie o diretório do repositório, se não existir
if [ ! -d "$repo_directory" ]; then
  mkdir -p "$repo_directory"
fi

# Copie os pacotes RPM para o diretório do repositório
# Certifique-se de que os pacotes estejam no formato RPM correto para o Oracle Linux 9
cp /caminho/dos/seus/pacotes/*.rpm "$repo_directory"

# Crie os metadados do repositório usando o comando createrepo
createrepo "$repo_directory"

# Configure as permissões corretas para o diretório do repositório
chown -R apache:apache "$repo_directory"

# Reinicie o servidor web (Apache) para aplicar as alterações
systemctl restart httpd
