#include <stdio.h>

/*
 * Desafio: Movimentação de Peças de Xadrez (Nível Aventureiro)
 * Este programa simula a movimentação de quatro peças do xadrez:
 * Torre, Bispo, Rainha e Cavalo, utilizando estruturas de repetição.
 * Cada peça usa uma estrutura diferente, com destaque para loops aninhados no Cavalo.
 * Autor: [Seu Nome]
 */

// ------------------- TORRE -------------------
void movimentarTorre() {
    // A Torre se move em linha reta. Aqui, 5 casas para a direita usando for.
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// ------------------- BISPO -------------------
void movimentarBispo() {
    // O Bispo se move na diagonal. Aqui, 5 casas para cima e à direita usando while.
    int i = 1;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
}

// ------------------- RAINHA -------------------
void movimentarRainha() {
    // A Rainha se move em todas as direções. Aqui, 8 casas para a esquerda usando do-while.
    int i = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
    printf("\n");
}

// ------------------- CAVALO -------------------
void movimentarCavalo() {
    // O Cavalo se move em "L": 2 casas em uma direção + 1 em outra.
    // Aqui, 2 para baixo e 1 para a esquerda usando for + while (loops aninhados).
    printf("Movimento do Cavalo (2 casas para Baixo, 1 para Esquerda):\n");

    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");  // Movimento vertical (2 vezes)

        if (i == 1) {
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");  // Movimento perpendicular após a segunda descida
                j++;
            }
        }
    }
    printf("\n");
}

// ------------------- PRINCIPAL -------------------
int main() {
    movimentarTorre();
    movimentarBispo();
    movimentarRainha();
    movimentarCavalo();
    return 0;
}
