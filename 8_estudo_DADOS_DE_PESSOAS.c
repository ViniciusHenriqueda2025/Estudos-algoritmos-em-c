#include <stdio.h>
#include <string.h>
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){
    int quantas,i;

    printf("Quantas pessoas serao digitadas? ");
       scanf("%d", &quantas);

    char nomes[quantas][50];
    int idades[quantas];
    double alturas[quantas];

    for( i = 0 ; i < quantas ; i++ ){
       printf("Dados da %da pessoa\n", i+1);
          printf("NOME: ");
          fseek(stdin, 0, SEEK_END);
             gets(nomes[i]);
          printf("IDADE: ");
             scanf("%d",&idades[i]);
          printf("ALTURA: ");
             scanf("%lf",&alturas[i]);
    }

    double soma,media,porcento;
    int menor;
    soma = 0;

    for( i = 0 ; i < quantas ; i++ ){
      soma = soma + alturas[i];
    }

    media = soma / quantas;

    printf("Altura Media: %.2lf\n",media);

    menor = 0;

    for( i = 0 ; i < quantas ; i++ ){
      if (idades[i] < 16){
         menor = menor + i;

      }
    }
    porcento = menor * 100.0 / quantas;

    printf("pessoas com menos de 16 anos: %.1lf%%\n", porcento);

    for( i = 0 ; i < quantas ; i++ ){
      if (idades[i] < 16){
        printf("%s\n",nomes[i]);

      }
    }
    return 0;
}

