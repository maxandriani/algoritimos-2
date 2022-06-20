#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "libs/utils.h"

int main() {
    setlocale(LC_ALL, "");

    char file[25];
    char path[50] = { "../out/" };
    char buffer[255];
    FILE *arquivo;

    printf("Digite o nome do arquivo que deseja criar: (arquivo.txt)");
    gets(file);
    strcat(path, file);

    printf("Abrindo %s\n", path);
    arquivo = fopen(path, "w+");

    printf("Escreva alguma coisa:\n");
    gets(buffer);
    fputs(buffer, arquivo);

    fclose(arquivo);

    pause();
    return 0;
}