#!/bin/bash

# Defina o diretório do repositório
repo_directory="/srv/repo"

# Crie o diretório do repositório, se não existir
if [ ! -d "$repo_directory" ]; then
  mkdir -p "$repo_directory"
fi

# Copie os pacotes PKG.TAR.XZ para o diretório do repositório
# Certifique-se de que os pacotes estejam no formato PKG.TAR.XZ correto para o Arch Linux
cp /caminho/dos/seus/pacotes/*.pkg.tar.xz "$repo_directory"

# Execute o comando para adicionar os pacotes ao índice do repositório
repo-add "$repo_directory"/nome-do-repositorio.db.tar.gz "$repo_directory"/*.pkg.tar.xz

# Configure as permissões corretas para o diretório do repositório
chown -R http:http "$repo_directory"

# Reinicie o servidor web (Nginx) para aplicar as alterações
systemctl restart nginx
