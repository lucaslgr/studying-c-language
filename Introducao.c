#include <stdlib.h>  //Para usar o system("pause")
#include <stdio.h> //Para usar printf e scanf

int main(){

    //=================<Usando a função gets para pegar uma cadeia de caracteres de uma vez>==================
    char nome[30];
    printf("Informe seu nome: ");
    fflush(stdin); //Limpando o buffer de memória
    gets(nome);
    printf("Seu nome eh: %s \n", nome);


    //=================<Usando o printf de diferentes formas>==================
    printf("xy%10dwz\n", 100); //A variável impressa em %d ocupara 10 casas de caracteres quando for impressa
    printf("xy%-10dwz\n", 100); //A variável impressa em %d ocupara -10 casas de caracteres quando for impressa
    system("pause");
}