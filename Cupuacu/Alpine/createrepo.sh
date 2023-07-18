#!/bin/sh

# Defina o diretório do repositório
repo_directory="/var/www/html/repo"

# Crie o diretório do repositório, se não existir
if [ ! -d "$repo_directory" ]; then
  mkdir -p "$repo_directory"
fi

# Copie os pacotes APK para o diretório do repositório
# Certifique-se de que os pacotes estejam no formato APK correto para o Alpine Linux
cp /caminho/dos/seus/pacotes/*.apk "$repo_directory"

# Crie o índice do repositório
apk index -o "$repo_directory"/APKINDEX.tar.gz "$repo_directory"/*.apk

# Reinicie o servidor web (Nginx) para aplicar as alterações
rc-service nginx restart
