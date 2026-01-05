#include <stdio.h>
#include <stdlib.h>

int main(){
   int i , quantos , numero , soma ;

   printf("quantos numeros voce vai digitar= ");
      scanf("%d", &quantos);

   soma = 0 ;

   for (i = 1 ; i <= quantos ; i++ ){
    printf("qual valor ?= ");
       scanf("%d",&numero);
       soma = soma + numero;
                                }
   printf("\n");
   printf("TOTAL SOMADOS : ");
   printf("%d" , soma);
   printf("\n");
                                    return 0;
}
