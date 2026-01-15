#include <stdio.h>
#include <locale.h>

int main()  {
    setlocale(LC_ALL, "");
int numero;
int x;
int y;
printf("Digite um número inteiro: ");
scanf("%i", &numero);

printf("Você digitou: %i\n", numero);
  
printf("Digite as coordenadas x e y: ");
scanf("%i %i", &x, &y);
printf("Você digitou: %i e %i\n", x, y);  
  
  return 0;

}

