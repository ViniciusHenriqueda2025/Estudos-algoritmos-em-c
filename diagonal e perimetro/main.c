#include <stdio.h>
//  < MATH.H > biblioteca de funções matematicas
#include <math.h>

int main(){

    double base,altura,area,perimetro,diagonal;

    printf("*****CALCULO RETANGULO*****\n");
    printf("Base do retangulo= ");
       scanf("%lf",&base);
    printf("altura do retangulo= ");
       scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0)+ pow(altura,2.0));
    //sqrt é a raiz quadrada e pow é ao quadrado

    printf("AREA = %.4lf\n" , area);
    printf("PERIMETRO = %.4lf\n" , perimetro);
    printf("DIAGONAL = %.4lf\n" , diagonal);

    return 0;
}
