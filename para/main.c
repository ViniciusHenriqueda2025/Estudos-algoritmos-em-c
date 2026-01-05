#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor,i,resul;


    printf("Deseja tabuada para qual valor? ");
      scanf("%d", &valor);

    for( i = 1 ; i <= 10 ; i++ ){
      resul = valor * i;
      printf(" %d x %d = %d\n", valor , i , resul );



    }



    return 0;
}
