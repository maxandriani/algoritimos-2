#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    // Imprimir Aguarde 100x on screen
    int i=0;

    do {
        printf("Aguarde...\n");
        i++;
    } while (i < 100);

    pause();
    return 0;
}