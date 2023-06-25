CC = gcc
CFLAGS = -std=c2x -pipe -O3 -g3 -pipe -static -march=native -mtune=native -Wall -Wextra

SRC_DIR = src
LIB_DIR = lib
BIN_DIR = bin
OBJ_DIR = obj

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

TARGET = $(BIN_DIR)/libcolor

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIB_DIR)/color.h
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
