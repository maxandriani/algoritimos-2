#include <stdio.h>
#include <locale.h>
#include "libs/utils.h"

#define MAT_ROWS 3
#define MAT_COLS 3

int main() {
    setlocale(LC_ALL, "");

    int matriz_a[MAT_ROWS][MAT_COLS] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i=0; i<MAT_ROWS; i++) {
        for (int j=0; j<MAT_COLS; j++){
            printf("%d ", matriz_a[i][j]);
        }
        printf("\n");
    }

    pause();
    return 0;
}