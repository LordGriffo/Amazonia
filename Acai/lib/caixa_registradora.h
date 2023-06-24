#ifndef CAIXA_REGISTRADORA_H
#define CAIXA_REGISTRADORA_H

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    float preco;
} Produto;

typedef struct {
    Produto produtos[MAX_PRODUTOS];
    int quantidade;
    float total;
} CaixaRegistradora;

void inicializarCaixa(CaixaRegistradora *caixa);
void adicionarProduto(CaixaRegistradora *caixa, const char *nome, float preco);
void calcularTotal(CaixaRegistradora *caixa);
void imprimirRecibo(const CaixaRegistradora *caixa);

#endif
