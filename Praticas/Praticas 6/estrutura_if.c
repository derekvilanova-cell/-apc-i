#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
int numero;
int eh_um_numero = scanf("%i", &numero);

if (eh_um_numero) {
  printf("Você digitou o número: %d\n", numero);
}

    return 0;
}