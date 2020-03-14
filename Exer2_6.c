#include <stdlib.h> //Para usar system("pause");
#include <stdio.h> //Para usar pintf()

int main(){
    float x=0.0, y=0.0, r1=0.0, r2=0.0;
    

    printf("\t\tSISTEMA DE EQUACOES\n");
    printf("Informe os dois resultados para x + y, e para x - y: ");
    scanf("%f %f", &r1, &r2);

    //printf("%d %d", r1, r2);
    //Solution
    x = (r1 + r2)/2;
    y = r1 - x;

    printf("Solucao: \n");
    printf("%f %f", x, y);
    return 0;
}