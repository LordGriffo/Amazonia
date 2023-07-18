#!/bin/bash

# Defina o diretório do repositório
repo_directory="/var/www/html/repo"

# Crie o diretório do repositório, se não existir
if [ ! -d "$repo_directory" ]; then
  mkdir -p "$repo_directory"
fi

# Copie os pacotes DEB para o diretório do repositório
# Certifique-se de que os pacotes estejam no formato DEB correto para o Debian
cp /caminho/dos/seus/pacotes/*.deb "$repo_directory"

# Crie o arquivo Release para o repositório
cd "$repo_directory"
apt-ftparchive packages . > Packages
gzip -k -f Packages

# Crie o arquivo Release e assine com a chave GPG
gpg --default-key "sua_chave_gpg" -abs -o Release.gpg Release

# Reinicie o servidor web (Apache) para aplicar as alterações
systemctl restart apache2
