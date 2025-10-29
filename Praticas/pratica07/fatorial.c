#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main() {
     setlocale(LC_ALL, "");
    
    int numero;
    int fatorial = 1;
    scanf("%i", &numero);
    

    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
       
}
  printf("Fatorial de %i = %i\n", numero, fatorial);
     return 0;
}