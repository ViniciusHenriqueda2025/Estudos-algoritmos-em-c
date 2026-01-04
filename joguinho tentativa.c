#include <stdio.h>

int main(){

    int numero, contador;
    int escolha = 29;
    
    printf("          JOGO DE ADIVINHACAO\n");
    printf("\n");
    printf("tente acertar o numero de 1 ate 30 = ");
    scanf("%d", &numero);
    
    // CORREÇÃO 1: Começa com 1, pois ele já fez o primeiro chute acima
    // CORREÇÃO 2: Adicionei o ponto e vírgula no final
    contador = 1; 

    while (numero != escolha){
    
        if (numero < escolha){
            printf("O NUMERO E MAIOR TENTE OUTRO = ");
        } else {
            printf("O NUMERO E MENOR TENTE OUTRO = ");
        } 
        
        scanf("%d", &numero);
        
        // CORREÇÃO 3: Corrigido "cantador" para "contador" e adicionado o ;
        contador = contador + 1;
    }
   
    printf("    ### VOCE ACERTOU EM %d TENTATIVAS PARABENS ##", contador);
    
    return 0;
}
