
# Servidor HTTP Simples com Ruby e WEBrick

Este é um servidor HTTP simples implementado em Ruby usando a biblioteca WEBrick. O servidor permite listar arquivos em um diretório e fazer download deles.

## Pré-requisitos

Certifique-se de ter o Ruby e o Bundler instalados no seu sistema. Você pode instalar o Bundler usando o seguinte comando:


gem install bundler

Instalação

    Clone este repositório para o seu sistema:



git clone https://github.com/LordGriffo/Amazonia.git
cd Amazonia/Bacuri

    Execute o seguinte comando para instalar as gemas necessárias:


bundle install

Uso

Execute o servidor com o seguinte comando:



bundle exec ruby servidor.rb

O servidor estará disponível em http://localhost:80.

    Para listar os arquivos disponíveis para download, acesse a raiz do servidor.
    Para fazer o download de um arquivo, clique no link correspondente ao arquivo desejado.

Configuração

Você pode configurar o diretório de onde o servidor serve os arquivos modificando a variável diretorio no código. Por padrão, o servidor serve arquivos a partir do diretório atual.
Licença

Este projeto está licenciado sob a Licença MIT.



