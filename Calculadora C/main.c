#include <stdio.h>
#include <string.h>

int main(){
    int numero,i,n;


    printf("  --- GERADOR DE TABUADA --- \n");
    printf("\n");
    do {
    printf("Digite um numero para ver a tabuada= ");
       scanf("%d", &numero);



    for ( i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero,i,numero*i );
    }
     printf("Deseja continuar ? (1 para sim \ 2 para nao)");
     scanf("%d", &n);
    }while( n == 1 );

    printf("Encerrando o programa");



    return 0;
}
