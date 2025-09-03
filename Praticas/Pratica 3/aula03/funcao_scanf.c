#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    // 1) tipos de dados
    // char - caracter
    // int - inteiro
    // float - flutante at� 6 casas
    // double - flutante at� 12 casas
    // void - sem tipo
    
    // 2) variaveis e constantes
    int idade = 18;
    char tecla = 's';
    float nota = 8.5f;
    const double pi = 3.1415169226;
    
    printf("Os valores das vari�veis:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", pi);

    printf("\nInforme os novos valores:\n");
    scanf("%i", &idade);
    getchar(); // ler uma tecla limpa \n
    scanf("%c", &tecla);
    getchar(); // ler uma tecla limpa \n
    scanf("%f", &nota);
    // scanf"%f" , pi); n�o pode!!

    printf("Os novos valores s�o:\n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);

    return 0;

     
}