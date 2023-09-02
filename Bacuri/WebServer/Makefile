# Makefile #
#
#
#
# Neste Makefile:
#
#    RUBY_FILE é o nome do arquivo Ruby principal do seu projeto.
#    GEMFILE é o nome do arquivo Gemfile.
#    SERVER_DIR é o diretório onde o servidor será executado.
#    BUNDLE_CMD é o comando para instalar gemas usando o Bundler.
#    RUN_SERVER_CMD é o comando para executar o servidor Ruby.
#    CLEAN_CMD é o comando para limpar arquivos temporários, como o diretório do servidor e logs.
#
# O Makefile define três tarefas principais:
#
#    install: Instala as gemas listadas no Gemfile.
#    run: Cria o diretório do servidor e executa o servidor Ruby.
#    clean: Limpa arquivos temporários.
#
# Você pode executar essas tarefas usando o comando make no terminal. Por exemplo:
#
# make install  # Para instalar as gemas
# make run      # Para executar o servidor
# make clean    # Para limpar arquivos temporários
#
# Lembre-se de ajustar as variáveis no Makefile de acordo com a estrutura do seu projeto. Este é apenas um exemplo genérico e pode ser personalizado para atender às necessidades específicas do seu projeto Ruby.




# Nome do arquivo Ruby principal
RUBY_FILE = socket.rb

# Nome do Gemfile
GEMFILE = Gemfile

# Diretório onde o servidor será executado
SERVER_DIR = .

# Comando para instalar gemas
BUNDLE_CMD = bundle install

# Comando para executar o servidor
RUN_SERVER_CMD = bundle exec ruby $(RUBY_FILE)

# Comando para limpar arquivos temporários
CLEAN_CMD = rm -rf $(SERVER_DIR) *.log

.PHONY: all install run background clean

all: install run

install:
	$(BUNDLE_CMD)

run:
	mkdir -p $(SERVER_DIR)
	$(RUN_SERVER_CMD)

background:
	nohup ruby $(RUBY_FILE) &

clean:
	$(CLEAN_CMD)
