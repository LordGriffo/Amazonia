#!/bin/bash

# Defina o endereço IP ou nome do servidor que contém o repositório
server="endereço_do_servidor"

# Adicione o repositório ao arquivo de repositórios do Pacman
echo "[nome-do-repositorio]" >> /etc/pacman.conf
echo "Server = http://$server/repo" >> /etc/pacman.conf

# Atualize a lista de pacotes
pacman -Sy
