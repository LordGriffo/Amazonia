#include <locale.h>

void set_system_locale() {
    setlocale(LC_ALL, ""); // Configura o locale para o do sistema
}
