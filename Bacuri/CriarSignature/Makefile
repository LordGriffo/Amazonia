# Makefile #

# Nome do arquivo Ruby principal
RUBY_FILE = main.rb

# Nome do Gemfile
GEMFILE = Gemfile

# Comando para instalar gemas
BUNDLE_CMD = bundle install

# Comando para executar o servidor
RUN_CMD = bundle exec ruby $(RUBY_FILE)


.PHONY: all install run clean

all: install run

install:
	$(BUNDLE_CMD)

run:
	$(RUN_CMD)

clean:
	# Adicione comandos de limpeza aqui, se necessário
