#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[4][4];
    int posLinhaMen, posLinhaMai, posColMen, posColMai;
    int maiorvalor = 0;
    int menorvalor = 0;


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d", &valores[i][j]);
            printf("\n");

            if(valores[i][j] > maiorvalor){

                maiorvalor = valores[i][j];
                posLinhaMai = i;
                posColMai = j;

            }
            else if(valores[i][j] < menorvalor){

                menorvalor = valores[i][j];
                posLinhaMen = i;
                posColMen = j;

            }

        }
    }

    printf("O maior valor atribuido foi %d! E a posicao dele na matriz e: [%d][%d]\n\n",maiorvalor,posLinhaMai,posColMai);
    printf("O menor valor atribuido foi %d! E a posicao dele na matriz e: [%d][%d]\n\n",menorvalor,posLinhaMen,posColMen);

    return 0;
}
