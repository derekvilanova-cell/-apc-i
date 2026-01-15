#include <stdio.h>
#include <locale.h>
int main()
{

int numero = 0;

printf("Entre com um numero interiro de 1 a 10: -");
scanf("%i", &numero);

do
{
    printf ("Numero deve estar entre 1 e 10!\n");
    printf("Tente novamente arrombado do caralho: ");
    scanf("%i", &numero);
} while (numero < 1 || numero > 10 );

printf("Você digitou um numero valido!\n");


return 0;
}