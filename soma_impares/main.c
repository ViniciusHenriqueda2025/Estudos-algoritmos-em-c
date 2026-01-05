#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n1, n2, i,soma,troca  ;
      printf("Digite dois numeros:\n");
      scanf( "%d %d" , &n1 ,&n2);

      if ( n1 > n2 ){
       troca= n1;
       n1 = n2;
       n2 = troca;
      }

       soma = 0;

       for ( i = n1+1 ; i < n2 ; i++  ){

         if ( i % 2 != 0){
            soma = soma + i;
         }
       }

        printf("\n SOMA DOS IMPARE = %d\n" , soma);

    return 0;
}
