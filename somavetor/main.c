#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantos;

    printf("Quantos numeros voce vai digitar? ");
      scanf("%d",&quantos);

    double vetor[quantos];

    for( int i = 0; i < quantos; i++){
       printf("Digite um numero: ");
         scanf("%lf", &vetor[i]);
    }

    printf("\nVALORES = ");

    for( int i = 0; i < quantos; i++){
       printf("%.1lf  ", vetor[i]);
    }

    double soma,media;

    for( int i = 0; i < quantos; i++){
      soma = soma+ vetor[i];

    }
    printf("\nSOMA= %.2lf\n", soma);
    printf("MEDIA= %.2lf", soma / quantos);

    return 0;
}
