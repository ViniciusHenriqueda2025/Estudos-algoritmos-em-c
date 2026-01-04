#include<stdio.h>
#include<string.h>
   
   void limpar_entrada() {  
   char c; 
   while ((c = getchar()) != '\n' && c != EOF) {}
   }

int main()
{
    char nome[50] ;
    int idade;
    char sexo;
    double altura;
    printf("Preencha o formulario\n");
    
    printf("Qual seu nome= ");
       scanf("%c", nome);
    
    limpar_entrada();
    
    printf("Qual A sua idade= ");
       scanf("%d", &idade );
    
    limpar_entrada(); 
    
    printf("Qual seu sexo=");  
       scanf("%c", &sexo); 
    return 0;
}
