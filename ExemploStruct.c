#include <stdio.h> //printf
#include <stdlib.h> //system()

typedef struct {
    char nome [100];
    int idade;
    char cidade[50];
    char sexo[20];
} Aluno;


int main(){
    Aluno a;
    printf("Informe o seu nome: \n");
    fflush(stdin);
    gets(a.nome);

    printf("Informe a sua idade: \n");
    scanf("%d",&a.idade);

    printf("Informe o nome da sua cidade: \n");
    fflush(stdin);
    gets(a.cidade);

    printf("Informe o seu sexo: \n");
    fflush(stdin);
    gets(a.sexo);

    //Imprimindo
    printf("O aluno %s tem idade de %d, mora em %s e eh do sexo %s", a.nome, a.idade, a.cidade, a.sexo);
    return 0;
}