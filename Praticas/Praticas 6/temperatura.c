#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    float temperatura;

    printf("informe a temperatura: ");
    scanf("%f", &temperatura);
    if (temperatura > 40.0f)
    {
        printf("Muito quente");
    }
    if (temperatura < 20.0f)
    {
        printf("Muito frio");
    }

    else
    {

        if (temperatura > 20.0f || temperatura > 30.0f)
        {
            printf("Clima Agradavel!\n");
        }
    }
        return 0;
    }