#include "fatorial.h"

int fatorial(int numero) {
    if (numero <= 1) return 1; // define o parâmetro de parada
    return fatorial(numero - 1) * numero; // calcula o número com o fatorial do anterior.
}
