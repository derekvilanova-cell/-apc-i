#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
     setlocale(LC_ALL, "");
     
    int numeros[10];

    for(int i=0; i<10; i++) {
        printf("%i ", i);
        
}

 for(int i=9; i>=0; i--) {
        printf("%i ", i);

}
   
for(;;) {
    printf("Ao infinito e alem!\n");
}







     return 0;
}