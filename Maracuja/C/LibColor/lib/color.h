#ifndef COLOR_H
#define COLOR_H

// Definindo constantes para cores
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define WHITE   "\x1B[37m"

// Função para imprimir texto em uma cor específica
void print_color(const char* color, const char* text);

#endif
