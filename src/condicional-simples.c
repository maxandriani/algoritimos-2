#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Informe um número: \n");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("%d é maior que 10", numero);
    }

    pause();
    return 0;
}