#include<stdio.h>
#include<string.h>

int main(){

   int horas;


   printf("ESCOLHA UMA HORA = ");
      scanf("%d",&horas);
   
   while(horas < 0 || horas >= 24){
   
   printf("Horas invalidas Tente denovo\n");
   printf("ESCOLHA UMA HORA = \n");
   
      scanf("%d",&horas);
   }
   
   if (horas < 12){
   
   printf("BOM DIA\n");

   }else if(horas < 18){
   printf("BOA TARDE");
   
   }else{
   printf("BOA NOITE");
   
   
   }


   return 0;
}