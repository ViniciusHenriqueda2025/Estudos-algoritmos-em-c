#include<stdio.h>
#include<string.h>

int main(){
   
   int senha;
   int codico = 19283746;

   printf("QUAL A SENHA PARA ENTRA NO APP ? \n");
     scanf("%d", &senha);
  
   if (senha == codico){
   printf("\n");
   printf("**parabens voce entrou no seu banco**\n");
   
   }else{
    do{
   printf("Senha invalida tente outra= ");
    scanf("%d", &senha);
  }while(senha != codico);
  printf("\n"); 
  printf("**parabens voce entrou no seu banco**");
  printf("\n"); 
  }  
         return 0;

}