#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"
#include "libs/pesos.h" // <<<<<<<< atention

int main() {
    setlocale(LC_ALL, "");

    float quilos, gramas;
    printf("Informe um valor em Kg: ");
    scanf("%f", &quilos);
    gramas = converter_quilos_em_gramas(quilos);
    printf("%.2f Kg -> %.2f g\n", quilos, gramas);

    pause();
    return 0;
}