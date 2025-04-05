#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) - Utilizando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) - Utilizando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) - Utilizando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n");

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) - Utilizando for + while
    printf("Movimento do Cavalo:\n");

    // Definição das quantidades de casas do movimento do Cavalo
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop externo com for: controla as duas casas para baixo
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno com while: controla a casa para a esquerda
    int l = 0;
    while (l < casasParaEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}

