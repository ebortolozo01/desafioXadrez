#include <stdio.h>

/*
 * Desafio: Movimentação de Peças de Xadrez (Nível Mestre)
 * Este programa simula os movimentos das peças Torre, Bispo, Rainha e Cavalo,
 * utilizando recursividade e loops aninhados/complexos conforme solicitado.
 * Autor: [Seu Nome]
 */

// ------------------- TORRE (Recursivo) -------------------
void movimentarTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        printf("\n");
        return;
    }
    printf("Direita\n");
    movimentarTorre(casasRestantes - 1);
}

// ------------------- BISPO (Recursivo + Loops Aninhados) -------------------
void movimentarBispo(int casas) {
    if (casas == 0) {
        printf("\n");
        return;
    }

    // Loop externo: simula a subida
    for (int i = 0; i < casas; i++) {
        // Loop interno: simula o deslocamento para a direita
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    movimentarBispo(casas - casas); // fim da recursão
}

// ------------------- RAINHA (Recursivo) -------------------
void movimentarRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        printf("\n");
        return;
    }
    printf("Esquerda\n");
    movimentarRainha(casasRestantes - 1);
}

// ------------------- CAVALO (Loops complexos com múltiplas condições) -------------------
void movimentarCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    int movimentos = 0;

    // Loop externo: movimentação vertical (2 casas)
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            movimentos++;
        } else {
            // Loop interno: movimentação horizontal (1 casa) com controle de fluxo
            for (int j = 0; j < 2; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    movimentos++;
                    break;
                } else {
                    continue;
                }
            }
        }
    }

    printf("\n");
}

// ------------------- PRINCIPAL -------------------
int main() {
    printf("Movimento da Torre (5 casas para Direita):\n");
    movimentarTorre(5);

    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    movimentarBispo(5);

    printf("Movimento da Rainha (8 casas para Esquerda):\n");
    movimentarRainha(8);

    movimentarCavalo();

    return 0;
}
