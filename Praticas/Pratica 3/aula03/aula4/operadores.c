#include <stdio.h>
#include <locale.h>
int main() {
    int numero1 = 10;
    setlocale(LC_ALL,"");
    int numero2 = 20;
    
    // operadores aritmeticos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / (numero2 * 1.0);
    int resto_da_divisao = numero1 % numero2;
    printf("A soma de %i com %i eh %i\n", numero1 , numero2, soma);
    printf("A subtracao de %i com %i eh %i\n", numero1 , numero2, subtracao);
    printf("A multiplicacao de %i com %i eh %i\n", numero1 , numero2, multiplicacao);
    printf("A divisao de %i com %i eh %.1f\n", numero1 , numero2, divisao);
    printf("O resto da divisão de %i com %i eh %i\n", numero1 , numero2, resto_da_divisao);

    // operadores incremente e decremento
    int incremento = numero1;
    int decremento = numero1;
    incremento++;  // numero1 = numero1 + 1;
    decremento--;  // numero1 = numero1 - 1;
    int pre_incremento = numero1;
    int pos_incremento = numero1;
    printf("O incremento de %i eh %i\n", numero1, incremento);
    printf("O decremento de %i eh %i\n", numero1, decremento);
    printf("O pre_incremento de %i eh %i\n", numero1, ++pre_incremento);
    printf("O pos_decremento de %i eh %i\n", numero1, pos_incremento++);
    printf("O pos_incremento de %i eh %i\n",pos_incremento);
    printf("O pos_incremento agora eh %i\n", pos_incremento);
    // opéradores relacionais
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1> numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferent = numero1 != numero2;
    
    // 0- falso, 1 - verdadeiro
    printf("O numero %i é menor que %i? %i\n", numero1, numero2, menor_que);
    printf("O numero %i é menor ou igual a %i? %i\n", numero1, numero2, menor_ou_igual);
    printf("O numero %i é maior que %i? %i\n", numero1, numero2, maior_que);
    printf("O numero %i é maior ou igual a %i? %i\n", numero1, numero2, maior_ou_igual);
    printf("O numero %i é igual a  %i? %i\n", numero1, numero2, igual);
    printf("O numero %i é diferente que %i? %i\n", numero1, numero2, diferent);
    
    return 0;
}