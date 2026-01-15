#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    int opcao;

    printf("-------------------\n");
    printf("   Menu Principal  \n");
    printf("-------------------\n");
    printf("2-Fazer recarga\n");
    printf("3-Ouvir recados\n");
    printf("4-Ultima chamada\n");
    printf("5-Encerrar chat\n");
    printf("-------------------\n");

    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);

    switch(opcao) {

        case 1: printf("Seu saldo é de R$ 10,00\n");
        break;

        case 2: printf("Escolha um valor de recarga\n");
        break;

        case 3: printf("Você não tem recados\n");
        break;

        case 4: printf("Obrigado pelo seu contato");
        break;

        case 5: printf("Obrigado pelo seu contato");
        break;

        default:("Opção invalida. Tente novamente\n");
        break;
    }


    return 0;
}