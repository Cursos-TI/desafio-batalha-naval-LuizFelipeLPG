#include <stdio.h>

#define tamanho 10
#define barco 3

int main() {
   
    // Título do jogo
    printf("TABULEIRO BATALHA NAVAL\n\n");

    // Inicialização do tabuleiro 10x10 com 0s (água)
    int inicializacao_tabu[tamanho][tamanho] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Navio horizontal na linha 1 (D ao F)
    for (int j = 3; j <= 5; j++) {
        inicializacao_tabu[0][j] = 3;
    }

    // Navio vertical na coluna I (4 ao 7)
    for (int i = 4; i < 7; i++) {
        inicializacao_tabu[i][8] = 3;
    }

    // Navio na diagonal (da direira para a esquerda h1 a f3)   
    for (int k = 0; k < barco; k++) {
        inicializacao_tabu[1 + k][7 - k] = 3;
    }

    //navio na diagonal (esquerda para direita b3 a d6)
    for (int a = 0; a < barco; a++)
    {
        inicializacao_tabu[4 + a][1 + a] = 3;
    }
    

    // Exibindo as letras das colunas (A a J)
    printf("    ");
    for (int j = 0; j < tamanho; j++) {
        printf("%c ", 'A' + j); // Letras das colunas (A a J)
    }
    printf("\n\n");

    // Exibindo o tabuleiro com os números das linhas (0 a 9)
    for (int i = 0; i < tamanho; i++) {
        printf("%2d ", i); // Números das linhas (0 a 9) com alinhamento
        for (int j = 0; j < tamanho; j++) {
            printf("%2d", inicializacao_tabu[i][j]); // Conteúdo do tabuleiro
        }
        printf("\n");
    }

    return 0;
}