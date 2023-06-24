NASM = nasm
LD = ld

SRC_DIR = src

ASM_SRC = $(SRC_DIR)/Template.asm
OBJ = $(SRC_DIR)/Template.o
BIN = $(SRC_DIR)/Template

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJ)
	$(LD) -m elf_i386 $< -o $@ 

$(OBJ): $(ASM_SRC)
	$(NASM) -f elf32 $< -o $@

clean:
	rm -f $(BIN) $(OBJ)
