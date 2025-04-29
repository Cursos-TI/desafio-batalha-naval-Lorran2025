#include <stdio.h>

int main(){

    char matriz[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int i,j;

    int navioVertical[2] = {3,3};
    int navioDiagonal[2] = {3,3};

    //Posições dos navios
    int linhaNavioV = 5;
    int colunaNavioV = 7;
    int linhaNavioD = 1;
    int colunaNavioD = 3;

    for (int i = 0; i < 2; i++){
        tabuleiro[linhaNavioV + i][colunaNavioV] = navioVertical[i];
    }

    for (int i = 0; i < 2; i++){
        tabuleiro[linhaNavioD + i][colunaNavioD + i] = navioDiagonal[i];
    }
    
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