# Nome do executável
TARGET = cambui

# Diretórios
SRC_DIR = src/
BUILD_DIR = build
BIN_DIR = bin

# Compilador e flags
CXX = g++
CXXFLAGS = -O3 -pipe  -v -march=native -mtune=native -Wall -Wextra -pedantic 
LDFLAGS = -static -lstdc++

# Bibliotecas
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

# Arquivos fonte
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Nome do arquivo de saída
EXECUTABLE = $(BIN_DIR)/$(TARGET)

# Regra para a construção do executável
$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ $(LIBS) -o $@

# Regra para a compilação dos arquivos fonte
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)
