#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
     setlocale(LC_ALL, "");
int nota = 0;


printf("Entre com um nota: ");
int leu_certo = scanf("%i", &nota);

while(nota < 1 || nota > 10) {
    printf("Nota invalida. Tente novamente!\n");
scanf("%i", &nota);
printf("Entre com uma nota: ");
    leu_certo = scanf("%i", &nota);

}

printf("Você digitou um numero valido!\n");



      return 0;
}


