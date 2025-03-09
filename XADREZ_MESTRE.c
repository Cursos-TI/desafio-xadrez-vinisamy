#include <stdio.h>

// Definição de constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV 2

// Função recursiva para movimentação do bispo
void moverBispo(int movimentos) {
    // Caso base da recursão
    if (movimentos <= 0) {
        return;
    }
    
    // Loop aninhado para mover na diagonal (direita e cima)
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            printf("Direita\n");
        } else {
            printf("Cima\n");
        }
    }
    
    // Chamada recursiva
    moverBispo(movimentos - 1);
}

// Função recursiva para movimentação da torre
void moverTorre(int movimentos) {
    // Caso base da recursão
    if (movimentos <= 0) {
        return;
    }
    
    printf("Direita\n");
    
    // Chamada recursiva
    moverTorre(movimentos - 1);
}

// Função recursiva para movimentação da rainha
void moverRainha(int movimentos) {
    // Caso base da recursão
    if (movimentos <= 0) {
        return;
    }
    
    printf("Esquerda\n");
    
    // Chamada recursiva
    moverRainha(movimentos - 1);
}

int main() {
    int opcao;
    
    // Título exibido no terminal
    printf("======== XADREZ MateCheck ========\n\n");
    
    printf("Escolha a peça para mover:\n");
    printf("1 - Bispo\n2 - Torre\n3 - Rainha\n4 - Cavalo\n");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            // Movimentação do Bispo (diagonal superior direita) usando recursão
            printf("Movimentação do Bispo:\n");
            moverBispo(BISPO_MOV);
            break;
        
        case 2:
            // Movimentação da Torre (para a direita) usando recursão
            printf("Movimentação da Torre:\n");
            moverTorre(TORRE_MOV);
            break;
        
        case 3:
            // Movimentação da Rainha (para a esquerda) usando recursão
            printf("Movimentação da Rainha:\n");
            moverRainha(RAINHA_MOV);
            break;
        
        case 4:
            // Movimentação do Cavalo (em L para direita e cima) usando loops complexos
            printf("Movimentação do Cavalo:\n");
            
            // Variáveis para controlar a movimentação
            int passo = 0, direcao = 0;
            
            // Loop com condições múltiplas
            for (passo = 0; passo < 6; passo++) {
                // Verifica qual direção seguir com base no passo atual
                if (passo < 3) {
                    if (passo < 2) {
                        printf("Direita\n");
                    } else {
                        printf("Cima\n");
                        continue; // Pula para a próxima iteração
                    }
                } else {
                    if (passo < 5) {
                        printf("Cima\n");
                    } else {
                        printf("Direita\n");
                        break; // Encerra o loop após o último movimento
                    }
                }
            }
            break;
        
        default:
            printf("Opção inválida!\n");
    }
    
    return 0;
}