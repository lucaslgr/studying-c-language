#include <stdio.h> //printf
// #include <math.h> 
#include <stdlib.h> //rand
// #include <conio.h>

int main() {
    int v1 = 0;
    printf("Informe um valor de ponto flutuante: ");
    scanf("%i", &v1);

    int random = rand();
    int rand0_10 = random % 10;

    printf("\nO valor randomico original: %i", random);
    printf("\nO valor randomico filtrado de 0-9: %i", rand0_10);
    printf("\nO valor sorteado agora eh: %i", rand0_10 * v1 );


    //Teste
    printf("\nValor: %i", 1433155442 % 100);

    return 0;
}