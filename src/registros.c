#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "libs/utils.h"

typedef struct produto_s { // definição do contrato Struct
    int codigo;
    char nome[50];
    int quantidade;
    float valor_compra;
    float valor_venda;
} produto_t; // Criação de tipo com base no contrato Struct

void init_produto(produto_t *produto) {
    printf("Dados do produto:\n");
    printf("Código: ");
    scanf("%d", &produto->codigo); // (.) acessa o atributo de uma variável, -> acessa de uma referência. é o mesmo que (*var).prop.
    fflush(stdin);
    printf("Nome: ");
    gets(produto->nome);
    printf("Quantidade: ");
    scanf("%d", &produto->quantidade);
    fflush(stdin);
    printf("Valor Compra: ");
    scanf("%f", &produto->valor_compra);
    fflush(stdin);
    printf("Valor Venda: ");
    scanf("%f", &produto->valor_venda);
    fflush(stdin);
}

void print_produto(produto_t produto) {
    printf("Produto %d.\nNome: %s;\nQuantidade: %d;\nValor Compra: %.2f;\nValor Venda: %.2f;\n",
           produto.codigo, produto.nome, produto.quantidade, produto.valor_compra, produto.valor_venda);
}

int main() {
    setlocale(LC_ALL, "");

    // instanciando com base na struct
    struct produto_s produto_1;
    // instanciando com base no tipo
    produto_t produto_2;

    printf("Inicializando produto por struct.\n");
    init_produto(&produto_1);

    printf("Inicializando produto por typedef.\n");
    init_produto(&produto_2);

    print_produto(produto_1);
    print_produto(produto_2);

    pause();
    return 0;
}