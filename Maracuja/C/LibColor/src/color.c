#include "../lib/color.h"
#include <stdio.h>

// Função para imprimir texto em uma cor específica
void print_color(const char* color, const char* text) {
    printf("%s%s%s", color, text, RESET);
}
