#include <stdio.h>
#include <stdlib.h>

int main(){

    double nota1, nota2, soma ;

    printf("Digite a primeira nota: ");
       scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
       scanf("%lf", &nota2);

    soma = nota1 + nota2;

    if (soma < 60){
       printf("\nNOTA FINAL= %.1lf\n", soma);
       printf("\nREPROVADO\n");
        }else {
         printf("\nNOTA FINAL= %.1lf\n", soma);
         printf("\nAPROVADO\n");

        }







    return 0;
}
