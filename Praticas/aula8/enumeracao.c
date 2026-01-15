#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    setlocale(LC_ALL, "");

    
        // const int false = 0;
        // const int true = 1;
    bool ocupado = true;
    
        const int domingo = 1;
        const int segunda = 2;
        const int terca = 3;
        const int quarta = 4;
        const int quinta = 5;
        const int sexta = 6;
        const int sabado = 7;

        enum boolean_e
        {
            falso,
            verdadeiro
        };
        enum dias_e
        {
            dom = 1,
            seg,
            ter,
            qua,
            qui,
            sex,
            sab
        };

        int dia_da_semana;
        printf("Informe o dia entre 1 e 7: ");
        scanf("%i", &dia_da_semana);

        switch (dia_da_semana)
        {
        case dom:
            printf("Domingo\n");
            break;
        case seg:
            printf("Segunda-Feira\n");
            break;
        case ter:
            printf("Terça-Feira\n");
            break;
        case qua:
            printf("Quarta-Feira\n");
            break;
        case qui:
            printf("Quinta-Feira\n");
            break;
        case sex:
            printf("Sexta-Feira\n");
            break;
        case sab:
            printf("Sabado\n");
            break;

        default:
            printf("dia invalido\n");
        }
    
    return 0;
}