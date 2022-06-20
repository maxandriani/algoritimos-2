#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, resto;

    printf("Informe um número:\n");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0) {
        printf("%d é par", numero);
    } else {
        printf("%d é impar", numero);
    }

    pause();

    return 0;
}