#include <stdio.h>
#include "utils.h"

void pause() {
    printf("\nPressione qualquer tecla para continuar.");

    char c = getchar();
    if (c == '\0' || c == '\n') c = getchar();
}