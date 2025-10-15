#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL, "");

int a;
int b;
int c;
printf("Digite o primeiro numero\n");
printf("Digite o segundo numero\n");
printf("Digite o terceiro numero\n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);

float delta = b*b - 4*a*c;
float x1 = (-b + sqrt(delta)) / 2*a;
float x2 =  (-b - sqrt(delta)) / 2*a;

printf("delta é %f\n",delta);

printf("x1 é %f\n", x1);
printf("x2 é %f\n", x2);



    return 0;
}