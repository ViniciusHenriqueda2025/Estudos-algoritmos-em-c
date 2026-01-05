#include <stdio.h>

int main(){

   int numero1, numero2 ;



   while ( numero1 != numero2   ){

    printf("Digite dois numeros:\n ");
       scanf("%d", &numero1);
       scanf(" %d", &numero2);

    if ( numero1 < numero2 ){
     printf(" CRESCENTE\n");
    }else if( numero2 < numero1  ){
     printf("DECRESCENTE\n");

    }





   }






    return 0;
}
