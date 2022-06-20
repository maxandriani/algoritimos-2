#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

/**
 * @brief Escreva um algorítimo para declarar um vetor
 * contento "notas", com limite de 4 posições do tipo `float`
 */

#define LIMITE 4

int main() {
    setlocale(LC_ALL, "");

    float notas[LIMITE] = { 0, 0, 0, 0 };
    float media = 0;

    printf("Informe as notas do aluno.\n");
    for (int i = 0; i < LIMITE; i++)
    {
        printf("Nota %d: ", i);
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0; i < LIMITE; i++)
    {
        media += notas[i];
    }

    media /= LIMITE;
    printf(
        "A média aritmética de %2f, %2f, %2f, %2f é: %2f",
        notas[0], notas[1], notas[2], notas[3], media);

    pause();
    return 0;
}
