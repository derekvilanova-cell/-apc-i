#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    int dia;
    printf("Entre os dias da 1 a 7 da semana: ");
     scanf("%i", &dia);

    switch (dia)
    {
    case 1: printf("O dia é 'Domingo'.\n");
    break;
    
    case 2: printf("O dia é 'Segunda'.\n");
    break;
    
    case 3: printf("O dia é 'Terça-Feira'.\n");
    break;
    
    case 4: printf("O dia é 'Quarta-Feira'.\n");
    break;
    
    case 5: printf("O dia é 'Quinta-Feira'.\n");
    break;

    case 6:  printf("O dia é 'Sexta-Feira'.\n");
    break;
    
    case 7:  printf("O dia é 'Sabado'.\n");
    break;
    

    default: printf("Nota invalida! Tente novamente.\n");
    break;
    }

    
       
return 0;
}