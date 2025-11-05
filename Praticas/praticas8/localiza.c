#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "");
    int numeros[10];
    int numero;
    int achou = -1;

    
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numeros[i]);
    }

    printf("Procure pelo numero: ");
    scanf("%i", &numero);
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
        }
    }
    if (achou < 0)
    {
        printf("O numero nao foi encontrado!\n");
    }
    else
    {

        printf("O numero foi encontrado na posição %i\n", achou);
    }

    return 0;
}