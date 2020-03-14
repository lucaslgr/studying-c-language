#include <stdio.h> //printf

void trocaValor(int *a){
    *a += *a;
    return;
}

void preencheVet(int *vet){
    for(int i = 0; i< 5 ; i++)
        vet[i] = i+1;
    return;
}

int main() {
    int a = 2;
    printf("Valor: %d\n", a);
    trocaValor(&a);
    printf("Valor: %d\n", a);

    int vet[5];
    preencheVet(vet);

    //imprimeVet
    for (int i = 0; i < 5; i++)
        printf("%d\t", vet[i]);    

    return 0;
}