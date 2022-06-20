#include <stdio.h>
#include <locale.h>
#include "libs/fatorial.h"
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    int numero, fat;
    // Recursão é função que resolve um problema iterando sobre ela mesma.
    printf("Informe um número: ");
    scanf("%d", &numero);

    fat = fatorial(numero);

    printf("%d! -> %d", numero, fat);

    pause();
    return 0;
}
