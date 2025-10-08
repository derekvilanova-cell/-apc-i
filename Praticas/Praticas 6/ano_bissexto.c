#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");

int ano;
scanf("%d", &ano);
int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400;
int eh_um_ano = scanf("%i", &ano);

if (eh_um_ano) {
    printf("Você digitou o ano: %d\n", ano);
}

int resto_divisao = ano % 4;
printf("O resto da divisão de %i por %i é igual a %i\n", ano, resto_divisao);
if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400) {
  printf("O ano %d é bissexto!\n", ano);
} else {
  printf("O ano %d não é bissexto!\n", ano);
}
    return 0;
}