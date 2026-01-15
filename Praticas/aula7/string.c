#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main() {
     setlocale(LC_ALL, "");

     char nome[30] = "Derek";
    
    nome[0] ='D';
    nome[1] ='e';
    nome[2] ='r';
    nome[3] ='e';
    nome[4] ='k';

for (int i = 0; i < 30; i++)
{
    nome[i] = 'A';
}


    printf("Seu nome é: %s\n", nome);
    
    nome[0] ='D';
    nome[1] ='e';
    nome[2] ='r';
    nome[3] ='e';
    nome[4] ='k';
    nome[5] ='\0';
    printf("Meu nome é: %s\n", nome);
    
    // nome = "Vilanova";

    // printf("Meu nome é: %s\n", nome);

    printf("Entre com seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
      printf("Seu nome é: %s\n", nome);

      //funções do string.h
      //preenche um string com um caracter
      memset(nome, 'A', sizeof(nome));
      printf("Seu nome é: %s\n", nome);
      memset(nome, 'B', 10);
      nome[10] = '\0';
      printf("Seu nome é: %s\n", nome);

      // copia uma string
    strcpy(nome, "Derek");
      printf("Seu nome é: %s\n", nome);

      //concatena duas strings
      strcat(nome, " Vilanova");
      printf("Seu nome é: %s\n", nome);

      //tamanho da string
      printf("Seu nome tem %i caracteres.\n", strlen(nome));

      //comparar strings
      printf("As strings '%s' e '%s' são iguais? %i\n", nome, "Derek", strcmp(nome,"Derek"));
      printf("As strings '%s' e '%s' são iguais? %i\n", "Derek", nome, strcmp("Derek", nome));
      printf("As strings '%s' e '%s' são iguais? %i\n", "Derek Vilanova", nome, strcmp("Derek Vilanova", nome));

    // procurar um caracter em uma string
    printf("A string '%s' possui a letra 'd'? %i\n", nome, strchr(nome, 'd'));
    printf("A string '%s' possui a letra 'e'? %i\n", nome,  strchr(nome, 'e'));

    //procurar uma string em uma string
    printf("A string '%s' possui a string 'rek'? %s\n", nome, strstr(nome, "rek"));
    printf("A string '%s' possui a string 'Araujo'? %s\n", nome, strstr(nome, "Araujo"));
   
    

     return 0;
}