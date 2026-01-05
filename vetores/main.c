#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int i, vet[10],maior,soma,menor,media,escolha,igual,repete;

  printf("ola escreva 10 numeros\n");

  for (i = 0; i < 10; i++ ){
    scanf("%d", &vet[i]);

  }
  igual=0;
  maior= vet[0];
  menor= vet [0];
  soma= 0;
  for (i=0; i<10; i++){
    if ( vet[i] > maior ){
        maior = vet[i];
    }
  }

  for (i=0; i<10; i++){
    if ( vet[i] < menor ){
        menor = vet[i];
    }
  }

  for (i=0; i<10; i++){
    soma= soma + vet[i];
  }

  media= soma / 10;

    printf("\no maior e o= %d \n" , maior);
    printf("o menor e o= %d \n" , menor);
    printf("a media e de= %d\n ", media);


    do{
    printf("Escolha um numero?= ");
     scanf("%d", &escolha);

    for (i=0; i<10; i++){
       if (escolha == vet[i]){
         igual = 1;
       }else{
         igual = 0;
       }
    }
    if (igual == 1 ){
       printf("\nesse numero voce ja digitou\n");
    }else if ( igual == 0){
       printf("esse numero voce nao digitou\n");

    }
    printf("DESEJA DIGITAR OUTRO NUMERO ?= (1) para sim \ (2) para nao= " );
       scanf("%d", &repete);

    }while (repete == 1);


    return 0;
}
