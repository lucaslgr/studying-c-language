#include <stdio.h>

int main()
{
    int epoca;
    printf("Digite o trimestre do ano em que estamos: ");
    scanf("%d", &epoca);
    switch (epoca)
    {
    case 1:{
        printf("Verao\n");
        printf("Teste\n");
    }
        break;
    case 2:
        printf("outono");
        break;
    case 3:
        printf("inverno");
        break;
    case 4:
        printf("primavera");
        break;
    default:
        printf("periodo invalido");
    }
    return 0;
}