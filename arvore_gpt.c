#include <stdio.h>

int main() {
    int rows = 10; // número de linhas da árvore
    int i, j, k; // variáveis de iteração

    // loop para imprimir cada linha da árvore
    for (i = 1; i <= rows; i++) {
        // loop para imprimir espaços em branco antes dos asteriscos
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // loop para imprimir os asteriscos
        for (k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }

        // pula para a próxima linha
        printf("\n");
    }

    // imprime o tronco da árvore
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= rows - 2; j++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}
