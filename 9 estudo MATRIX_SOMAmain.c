#include <stdio.h>
#include <stdlib.h>

int main(){
    int l,c,i,j;
    double matrix[10][10];

    printf("Qual a quantidade de linhas da matrix? n");
       scanf("%d", &l);
    printf("Qual a quantidade de colunas da matrix? ");
       scanf("%d",&c);



    for( i = 0; i < l; i++ ){
     printf("Digite os elementos da %da. linha:\n",i + 1);
       for( j = 0; j < c; j++){
          scanf("%lf", &matrix[i][j]);
       }
    }

    double soma,vetor[10];

    printf("Vetor gerado:\n");

    for( i = 0; i < l; i++ ){
       soma = 0;
       for( j = 0; j < c; j++){
          soma = soma + matrix [i][j];
       }
     vetor[l] = soma;
     printf("%.1lf\n", soma);
     }












    return 0;
}
