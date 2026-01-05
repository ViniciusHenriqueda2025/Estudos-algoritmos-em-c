#include <stdio.h>

int main(){

  double largura,comprimento,preco,area,metro ;



  printf("**** CALCULO DE TERRENO ****\n");

  printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
  printf("digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
  printf("Digite o preco do metro quadrado: ");
    scanf("%lf", &metro);

  area = largura * comprimento;
  preco = area * metro;
  printf("\nArea do terreno= %.2lf \n", area);
  printf("Preco do terreno= %.2lf \n", preco);






    return 0;
}
