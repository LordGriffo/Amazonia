CC = gcc
CFLAGS = -O3 -pipe -v -std=c2x -Wall -Wextra -pedantic -march=native -mtune=native -pie -fPIC
LDFLAGS = -static
TARGET = Template

# Diretório dos arquivos-fonte
SRC_DIR := src

# Diretório dos arquivos de cabeçalho
INC_DIR := lib

# Diretório para os arquivos objeto
OBJ_DIR := obj

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
