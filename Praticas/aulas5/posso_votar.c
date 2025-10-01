#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "");
    
    int idade;

    
    printf("informe sua idade: ");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("Você não pode votar!\n");
    } else {
        if (idade < 18 || idade > 70) {
            printf("Você pode votar!\n");
        } else {
            printf("Você deve votar!\n");
        }
   
}
 return 0;
}