#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    char palavra[50];
    char* cursor;
    int length = 0;

    printf("Informe uma palavra:\n");
    scanf("%50s", &palavra);

    cursor = (char*) &palavra;

    while (*cursor != '\0' || length >=50) {
        length++;
        cursor++;
    }

    printf("%s possui %d letras.", palavra, length);
    
    pause();
    return 0;
}