#include <stdio.h>

int main(){
    //Letras das colunas do tabuleiro
    char matriz[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int i, j;
    //Posição das habilidades
    int navioConeX = 4;
    int navioConeY = 4;
    int navioCruz = 4;
    int navioOctaedroX = 6;
    int navioOctaedroY = 1;

    //Posição do Cone
    for (j = 0; j < 5; j++){
        tabuleiro[navioConeX + 2][navioConeY + j] = 3;
        tabuleiro[navioConeX][navioConeY + 2] = 3;
        tabuleiro[navioConeX + 1][navioConeY + 1] = 3;
        tabuleiro[navioConeX + 1][navioConeY + 2] = 3;
        tabuleiro[navioConeX + 1][navioConeY + 3] = 3;
        tabuleiro[navioConeX + 2][navioConeY] = 3;
    }
    
    //Posição do Octaedro
    if (navioOctaedroX >= 0 && navioOctaedroX < 10 && navioOctaedroY >= 0 && navioOctaedroY < 10) {
        tabuleiro[navioOctaedroX][navioOctaedroY] = 3;
        tabuleiro[navioOctaedroX + 1][navioOctaedroY - 1] = 3;
        tabuleiro[navioOctaedroX + 1][navioOctaedroY] = 3;
        tabuleiro[navioOctaedroX + 1][navioOctaedroY + 1] = 3;
        tabuleiro[navioOctaedroX + 2][navioOctaedroY] = 3;
        }
    
    //Posição da Cruz
    for (j = 0; j < 5; j++){
        tabuleiro[navioCruz - 3][j] = 3;
    }

    for (i = 0; i < 3; i++){
        tabuleiro[i][navioCruz - 2] = 3;
    }
    //Impressão do tabuleiro
    printf(" *** TABULEIRO BATALHA NAVAL ***\n");
    printf("  ");
    for (i = 0; i < 10; i++){
        printf("%c ", matriz[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

return 0;
}