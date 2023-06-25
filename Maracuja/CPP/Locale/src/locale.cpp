#include "../lib/locale.hpp"
#include <locale>

void setSystemLocale() {
    std::locale::global(std::locale(""));
}
