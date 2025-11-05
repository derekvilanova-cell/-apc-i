#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
     setlocale(LC_ALL, "");
     
float total = 0.0f;

float nota_fiscal[5][3];
for(int i=0; i<5; i++) {
    scanf("%.3f", &nota_fiscal[i][0]);
    scanf("%.3f", &nota_fiscal[i][1]);
    nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
    total = total + nota_fiscal[i][2];

}
for(int i=0; i<5; i++) {
    
}




     return 0;
}
     