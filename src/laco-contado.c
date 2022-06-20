#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    int i, count;

    printf("Informe a quantidade de palavras a gerar:\n");
    scanf("%d", &count);

    for (i=0; i<count; i++) {
        printf("\n Hello");
    }

    printf(" world\n");

    pause();
    return 0;
}