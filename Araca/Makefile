# Nome do programa
TARGET = araca

# Compilador
CXX = g++

# Opções de compilação
CXXFLAGS = -std=c++23 -Wall -Wextra

# Diretórios
SRCDIR = src
BUILDDIR = build

# Arquivos fonte
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))


# Comando padrão
all: $(TARGET)

# Compilação dos objetos
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compilação do programa
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# Execução do programa
run:
	./$(TARGET) 

# Limpeza dos arquivos
clean:
	rm -rf $(BUILDDIR) $(TARGET)
