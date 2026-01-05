#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int soma, numero;
    char opcao;
    printf("vamos somar oque voce digitar ");

    soma = 0;

    do{
     printf("Digite o numero:= ");
        scanf("%d", &numero);

     soma = soma + numero;

     printf("dejesa somar mais um numero? s ou n =");

        limpar_entrada();
        scanf("%c", &opcao);

    }while (opcao == 's' );

    printf ("%d", soma);


    return 0;
}
