#include <stdio.h> //printf
#include <stdlib.h> //system
#include <string.h> //strcat, strcmp

/*
    - strcat(char destino[], "String para colar");
    - strcpy(char destino[], "String para copiar");
    - strcmp(char str1[], char str2[]);
*/


int main() {
    char nome[40], sobrenome[40], ultimo[40];
    char nomeCompleto[200];

    printf("\nInforme o seu primeiro nome: ");
    fflush(stdin);
    gets(nome);

    printf("\nInforme o seu sobrenome: ");
    fflush(stdin);
    gets(sobrenome);

    printf("\nInforme o seu ultimo nome: ");
    fflush(stdin);
    gets(ultimo);

    strcpy(nomeCompleto, "");
    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, ultimo);

    printf("O seu nome completo eh: %s",  nomeCompleto);

    if(strcmp(nomeCompleto, "Lucas Guima Rocha") == 0)
        printf("\nNome eh igual!");
    else
        printf("\nNome eh diferente!");
    return 0;
}