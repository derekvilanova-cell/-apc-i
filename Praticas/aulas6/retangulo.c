#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int ladoA;
    int ladoB;

    printf("Entre com o valor do lado A do retangulo: ");
    scanf("%i", &ladoA);
    printf("Entre com o valor do lado B do retangulo: ");
    scanf("%i", &ladoB);

    for (int i = 1; i <= ladoA; i++)
    {
        for (int j = 1; j <= ladoB; j++)
        {
            if (i == 1 || i == ladoA)
            {
                printf("-");
            }
            else if ( j == 1 || j == ladoB)
            {
            printf("|");
            }
            else
            {
                printf(" ");
            }

        }
            printf("\n");
    }

    return 0;
}