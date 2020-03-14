/*
    1. Escreva um programa que leia dois valores inteiros e efetue
    as seguintes operações matemáticas: adição, subtração,
    multiplicação, divisão e módulo (resto da divisão).
    Para os valores de entrada 5 e 2, o programa deverá exibir na
    tela:
    OPERACOES SOBRE INTEIROS
    Digite o primeiro valor: 5
    Digite o segundo valor: 2
    26
    Observe que:
    Para imprimir o símbolo %, você precisa usar %%, como segue
    o exemplo: printf("%d %% %d = %d\n", ...
    5 + 2 = 7
    5 - 2 = 3
    5 * 2 = 10
    5 / 2 = 2
    5 % 2 = 1
*/
#include <stdio.h> //Para usar o printf
#include <stdlib.h> //Para usar o comando system("pause")

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %d\n", x, y, x/y);
    printf("%d %% %d = %d\n", x, y, x%y);

    system("pause");
    return 0;
}

