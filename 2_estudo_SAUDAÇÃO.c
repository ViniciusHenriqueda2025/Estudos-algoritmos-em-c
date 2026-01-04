#include<stdio.h>
#include<string.h>

int main(){

   int horas;


   printf("ESCOLHA UMA HORA = ");
   printf("");
      scanf("%d",&horas);
   printf("");
   
   if (horas < 12){
   
   printf("BOM DIA\n");

   }else if(horas < 18){
   printf("BOA TARDE");
   
   }else{
   printf("BOA NOITE");
   
   
   }


   return 0;
}
