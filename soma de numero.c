#include <stdio.h>
#include <string.h>

int main(){
   int soma , numero ;
  
   printf("ESCOLHA NUMERO OU ESCOLHE 0 PARA SAIR\n");
     scanf("%d", &numero); 
   soma = 0 ;  
  
   while ( numero != 0){
   soma = soma + numero;
   printf("ESCOLHA MAIS UM = ");
   scanf("%d", &numero);
   }
   printf("\n");
   printf("TOTAL DE NUMERO = %d\n ", soma);

   return 0;
}