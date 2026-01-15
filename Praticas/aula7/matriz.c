#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
     setlocale(LC_ALL, "");
    float notas [6] [2];   

    notas [0] [1] = 0.0f;
    notas [1] [0] = 0.0f;
    notas [1] [1] = 0.0f;
    notas [2] [1] = 0.0f;
    notas [3] [0] = 0.0f;
    notas [3] [1] = 0.0f;
    notas [4] [0] = 0.0f;
    notas [4] [1] = 0.0f;
    notas [5] [0] = 0.0f;
    notas [5] [1] = 0.0f;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        printf("Entre com a %i° nota da %ia disciplina: ", j+1, i + 1);
        scanf("%f", &notas[i][j]);
        }
    }
    
    printf("Seu Boletim\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%ia disciplina ", i +1);
        for (int j = 0; j < 2; j++)
        {
         printf("%5.1f", notas[i][j]); 
        
    }
    }
    printf("\n");
    
    
    return 0;








}