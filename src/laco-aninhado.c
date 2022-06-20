#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    // Contar quantos números inteiros existem entre 7 e 13.
    // e para cada número, verifique se é um número primo.
    int count = 0;
    for (int numero = 7; numero <= 13; numero++)
    {
        count++;
        bool isPrime = true;
        int x = 2;

        do {
            isPrime = numero % x > 0;
            x++;
        } while(isPrime == true && x < numero);

        if (isPrime) {
            printf("%d é primo.\n", numero);
        } else {
            printf("%d não é primo.\n", numero);
        }
    }

    printf("existem %d números entre 7 e 13.\n", count);

    pause();
    return 0;
}