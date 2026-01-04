#include <stdio.h>
#include <string.h>

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
}
int main (){
  int idade1,idade2 ;
  char nome1[50], nome2[50];
  double media;

  printf("Nome da primeira pessoa= ");
     scanf("%c", &nome1);
  limpar_entrada();
 
  printf("idade= ");
     scanf("%d", &idade1);
  limpar_entrada();
  
  printf("Nome da segunda pessoa ");
     scanf("%c", &nome2);
  limpar_entrada();
  
  printf("idade= ");
     scanf("%d", &idade2);
 
  media = (idade1 + idade2) / 2;


  printf("A media é de %.2lf", media);
     return 0;
}
