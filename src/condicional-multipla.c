#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    short dia;

    printf("Informe um número de 1 a 7:\n");
    scanf("%d", &dia);

    printf("O dia é ");
    switch (dia)
    {
    case 1:
        printf("domingo.\n");
        break;
    case 2:
        printf("segunda-feira.\n");
        break;

    case 3:
        printf("terça-feira.\n");
        break;

    case 4:
        printf("quarta-feira.\n");
        break;

    case 5:
        printf("quinta-feira.\n");
        break;
    
    case 6:
        printf("sexta-feira.\n");
        break;

    case 7:
        printf("sábado.\n");
        break;

    }

    pause();
    return 0;
}