#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     setlocale(LC_ALL, "");

     float total = 0.0f;

     float nota_fiscal[5][3];
     for (int i = 0; i < 5; i++)
     {
          scanf("%f", &nota_fiscal[i][0]);
          scanf("%f", &nota_fiscal[i][1]);
          nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
          total = total + nota_fiscal[i][2];
     }

     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("Valores: %.2f\n", nota_fiscal[i][j]);
          }
     }

     printf("\nValor total: %.2f", total);

     return 0;
}
