#include <stdio.h>
#include "../lib/caixa_registradora.h"

int main() {
    CaixaRegistradora caixa;
    inicializarCaixa(&caixa);

    adicionarProduto(&caixa, "Item 1", 10.0);
    adicionarProduto(&caixa, "Item 2", 20.0);
    adicionarProduto(&caixa, "Item 3", 30.0);

    calcularTotal(&caixa);
    imprimirRecibo(&caixa);

    return 0;
}
