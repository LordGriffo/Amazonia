#include <stdio.h>
#include "../lib/caixa_registradora.h"

void inicializarCaixa(CaixaRegistradora *caixa) {
    caixa->quantidade = 0;
    caixa->total = 0.0;
}

void adicionarProduto(CaixaRegistradora *caixa, const char *nome, float preco) {
    if (caixa->quantidade < MAX_PRODUTOS) {
        Produto produto;
        sprintf(produto.nome, "%s", nome);
        produto.preco = preco;
        caixa->produtos[caixa->quantidade++] = produto;
    } else {
        printf("Limite máximo de produtos atingido.\n");
    }
}

void calcularTotal(CaixaRegistradora *caixa) {
    caixa->total = 0.0;
    for (int i = 0; i < caixa->quantidade; i++) {
        caixa->total += caixa->produtos[i].preco;
    }
}

void imprimirRecibo(const CaixaRegistradora *caixa) {
    printf("Recibo:\n");
    for (int i = 0; i < caixa->quantidade; i++) {
        printf("%s - R$%.2f\n", caixa->produtos[i].nome, caixa->produtos[i].preco);
    }
    printf("Total: R$%.2f\n", caixa->total);
}
