#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Informe sua idade:\n");
    scanf("%d", &idade);
    printf("Você possui %d anos 😍", idade);
}