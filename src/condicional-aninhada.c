#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    float media_final;
    
    setlocale(LC_ALL, "");

    printf("Informe sua média final: \n");
    scanf("%f", &media_final);

    if (media_final >= 7){
        printf("Aprovado!\n");
    } else if (media_final >= 4) {
        printf("Exame!\n");
    } else {
        printf("Reprovado!\n");
    }

    pause();
    return 0;
}