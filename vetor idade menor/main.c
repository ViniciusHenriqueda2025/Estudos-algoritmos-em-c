#include <stdio.h>
#include <stdlib.h>

int main(){

    int quantos ;

    printf("Escreva quantos numeros vai digitar? ");
       scanf("%d", &quantos);

    int vetor[quantos];

    for(int i = 0; i < quantos; i++){
     printf("Digite um numero= ");
       scanf("%d", &vetor[i]);
    }

     printf("\nNUMEROS NEGATIVOS:\n");

    for(int i = 0; i < quantos; i++){
       if (vetor[i] < 0 ){
          printf("%d\n", vetor[i]);
       }
    }


    return 0;
}
