#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m;

    printf("Determine quantas linhas e colunas tera a matriz quadrada: ");
    scanf("%d", &m);
    printf("\n");


    char matriz[m][m];


    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            if(i == j){

                matriz[i][j] = 'x';

            }
            else{

                matriz[i][j] = '-';

            }

        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){

            printf("%c ",matriz[i][j]);

        }
        printf("\n");
    }

    return 0;
}
