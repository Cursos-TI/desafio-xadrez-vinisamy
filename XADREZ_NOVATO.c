#include <stdio.h>

// Definição de constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    int i;
    
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    i = 0;
    while (i < BISPO_MOV) {
        printf("Direita\n");
        printf("Cima\n");
        i++;
    }
    printf("\n");

    // Movimentação da Torre (para a direita)
    printf("Movimentação da Torre:\n");
    i = 0;
    do {
        printf("Direita\n");
        i++;
    } while (i < TORRE_MOV);
    printf("\n");

    // Movimentação da Rainha (para a esquerda)
    printf("Movimentação da Rainha:\n");
    i = 0;
    while (i < RAINHA_MOV) {
        printf("Esquerda\n");
        i++;
    }
    printf("\n");

    return 0;
}