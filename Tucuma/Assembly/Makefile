# Makefile para o programa "Hello, World!" em NASM (64 bits)

# Nome do arquivo de saída
OUTPUT = hello

# Arquivo NASM
ASM_SOURCE = src/Template64.asm

all:
	nasm -f elf64 $(ASM_SOURCE)
	ld  -o $(OUTPUT) $(ASM_SOURCE:.asm=.o)

clean:
	rm -f $(OUTPUT) $(ASM_SOURCE:.asm=.o)
