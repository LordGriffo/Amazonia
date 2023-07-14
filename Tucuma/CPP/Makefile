CXX = g++
CXXFLAGS = -O3 -pipe -v -std=c++23 -Wall -Wextra -pedantic -march=native -mtune=native -pie -fPIC
LDFLAGS = -static -lstdc++
TARGET = Template

# Diretório dos arquivos-fonte
SRC_DIR := src

# Diretório dos arquivos de cabeçalho
INC_DIR := lib

# Diretório para os arquivos objeto
OBJ_DIR := obj

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
        $(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
        $(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
        mkdir -p $(OBJ_DIR)

clean:
        rm -rf $(OBJ_DIR) $(TARGET)

