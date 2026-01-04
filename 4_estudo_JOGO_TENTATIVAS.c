#include <stdio.h>

int main(){

    int numero, contador;
    int escolha = 29;
    
    printf("          JOGO DE ADIVINHACAO\n");
    printf("\n");
    printf("tente acertar o numero de 1 ate 30 = ");
    scanf("%d", &numero);
    
    contador = 1; 

    while (numero != escolha){
    
        if (numero < escolha){
            printf("O NUMERO E MAIOR TENTE OUTRO = ");
        } else {
            printf("O NUMERO E MENOR TENTE OUTRO = ");
        } 
        
        scanf("%d", &numero);
        
        contador = contador + 1;
    }
   
    printf("    ### VOCE ACERTOU EM %d TENTATIVAS PARABENS ##", contador);
    
    return 0;
}
