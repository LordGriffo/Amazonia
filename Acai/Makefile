CC = gcc
CFLAGS = -Wall -Wextra -pedantic -v -pipe -O3 -g3 -march=native -mtune=native -static -std=c2x
BIN_DIR = bin
LIB_DIR = lib
SRC_DIR = src
OBJ_DIR = obj
TARGET = acai

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

.PHONY: all clean

all: $(BIN_DIR)/$(TARGET)

$(BIN_DIR)/$(TARGET): $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIB_DIR)/caixa_registradora.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
