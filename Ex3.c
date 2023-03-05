#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m = 4;
    int matriz[m][m];
    int somaDiagonal = 0;



    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
            printf("\n");

            if(i == j){

                somaDiagonal += matriz[i][j];


            }
        }
    }

    printf("A soma dos valores da diagonal e: %d \n\n",somaDiagonal);

    return 0;
}

