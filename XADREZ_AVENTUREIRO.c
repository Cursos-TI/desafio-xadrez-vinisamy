#include <stdio.h>

// Definição de constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV 2

int main() {
    int i, opcao;
    
    printf("Escolha a peça para mover:\n");
    printf("1 - Bispo\n2 - Torre\n3 - Rainha\n4 - Cavalo\n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            // Movimentação do Bispo (diagonal superior direita)
            printf("Movimentação do Bispo:\n");
            i = 0;
            while (i < BISPO_MOV) {
                printf("Direita\n");
                printf("Cima\n");
                i++;
            }
            break;
        
        case 2:
            // Movimentação da Torre (para a direita)
            printf("Movimentação da Torre:\n");
            i = 0;
            do {
                printf("Direita\n");
                i++;
            } while (i < TORRE_MOV);
            break;
        
        case 3:
            // Movimentação da Rainha (para a esquerda)
            printf("Movimentação da Rainha:\n");
            i = 0;
            while (i < RAINHA_MOV) {
                printf("Esquerda\n");
                i++;
            }
            break;
        
        case 4:
            // Movimentação do Cavalo (em L para direita e esquerda)
            printf("Movimentação do Cavalo:\n");
            
            // Movendo em L para a direita
            printf("Direita\n");
            printf("Direita\n");
            printf("Cima\n");
            
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            
            // Movendo em L para a esquerda
            printf("Esquerda\n");
            printf("Esquerda\n");
            printf("Cima\n");
            
            printf("Cima\n");
            printf("Cima\n");
            printf("Esquerda\n");
            
            break;
        
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}
