#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    int nota;
    printf("Entre com uma nota de 1 a 5: ");
     scanf("%i", &nota);

    switch (nota)
    {
    case 1: printf("Voce ganhou '*'.\n");
    break;
    
    case 2: printf("Voce ganhou '**'.\n");
    break;
    
    case 3: printf("Voce ganhou '***'.\n");
    break;
    
    case 4: printf("Voce ganhou '****'.\n");
    break;
    
    case 5: printf("Voce ganhou '*****'.\n");
    break;
    

    default: printf("Nota invalida! Tente novamente.\n");
    break;
    }

    
       
return 0;
}