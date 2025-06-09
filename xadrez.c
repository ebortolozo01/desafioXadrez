#include <stdio.h>

// Função que simula o movimento da Torre (5 casas para a Direita usando for)
void movimentarTorre() {
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função que simula o movimento do Bispo (5 casas na Diagonal Cima Direita usando while)
void movimentarBispo() {
    int i = 1;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");
}

// Função que simula o movimento da Rainha (8 casas para a Esquerda usando do-while)
void movimentarRainha() {
    int i = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);
    printf("\n");
}

int main() {
    // Chamada das funções de movimentação
    movimentarTorre();
    movimentarBispo();
    movimentarRainha();
    return 0;
}
