#include <stdio.h>
/*
    - Em agrc vem o número de argumentos passados em agrv
    - Em agrv cada posicao conterá um argumento passado, que são separados por espaço
*/

int main(int argc, char *argv[])
{
    int cont;
    char *teste[10];
    teste[0] = "Teste 123";
    printf("\nTeste:  %s e %s\n", teste[0], teste[1]);



    for (cont = 0; cont < argc; cont++)
        printf("%d Parametro: %s\n", cont, argv[cont]);

    return 0;
}