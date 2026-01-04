#include <stdio.h>

int main() {
    float saldo = 1000.00; // Saldo inicial
    int opcao;
    float valor;

    printf("--- BEM-VINDO AO BANCO ADS ---\n");

    while(opcao != 4) {
        printf("\nSaldo atual: R$ %.2f\n", saldo);
        printf("1. Deposito\n");
        printf("2. Saque\n");
        printf("3. Ver Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Quanto deseja depositar? ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Sucesso! Novo saldo: R$ %.2f\n", saldo);
        } 
        else if(opcao == 2) {
            printf("Quanto deseja sacar? ");
            scanf("%f", &valor);
            if(valor > saldo) {
                printf("Erro: Saldo insuficiente!\n");
            } else {
                saldo -= valor;
                printf("Saque realizado! Saldo: R$ %.2f\n", saldo);
            }
        }
        else if(opcao == 3) {
            printf("Seu saldo disponivel e: R$ %.2f\n", saldo);
        }
    }

    printf("Obrigado por usar o Banco ADS. Ate logo!\n");
    return 0;
}