#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,j,posicao,negativo;

    printf("Qual a ordem da Matrix? ");
       scanf("%d",&n);

    int matrix[n][n];

    for (i = 0; i < n; i++){
       for(j = 0; j < n; j++){
         printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }

    }

    printf("\nDiagonal principal: ");

    posicao = 0;

    for (i = 0; i < n; i++){
       for(j = 0; j < n; j++){
         if ( i == j ){
            printf("%d  ", matrix [i][j]);
         }
       }
    }

    negativo = 0 ;

    for (i = 0; i < n; i++){
       for(j = 0; j < n; j++){
           if (matrix[i][j] < 0){
           negativo = negativo + 1;
           }
       }
    }
    printf("\nQuantidades de negativos = %d\n", negativo);

    return 0;
}
