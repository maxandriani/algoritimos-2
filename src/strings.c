#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "libs/utils.h"

int main() {
    // inicialização
    char string_1[256] = { 'M', 'a', 'x', 'm', 'i', 'l', 'i', 'a', 'n', 'o' };
    char string_2[256] = { "Andriani" };
    char scanf_str[256],
         gets_str[256],
         copy_str[256];

    // Atribuição
    printf("Qual é o seu nome?\n");
    scanf("%256s", scanf_str); // Não lê frases com espaço
                               // Dispensa uso do operador ref '&' pq é um ref type
    // Scanf caga o buffer do teclado quando lê strings, portanto é necessário limpá-lo
    fflush(stdin);
    printf("Você informou: %s\n", scanf_str);
    
    printf("Qual é o seu nome completo?\n");
    gets(gets_str); // Lê espaços, sintaxe simples
                    // cuidado: permite entrada de textos maiores q o buffer (travando o programa)
    printf("Você informou: %s\n", gets_str);
    
    // Copiar strings
    strcpy(copy_str, string_1);
    strcat(copy_str, " ");
    strcat(copy_str, string_2);

    if (strcmp(copy_str, "Maxmiliano Andriani") == 0) {
        printf("%s é igual %s %s\n", copy_str, string_1, string_2);
    }

    pause();
    return 0;
}