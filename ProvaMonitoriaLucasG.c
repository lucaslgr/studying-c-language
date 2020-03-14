/*
    Agenda com contatos que possuem 
        ->nome[300][50], telefone[300][20], email[300][40]
    
    Teremos funcoes de:
        -> Cadastrar um contato
        -> Buscar um contato por nome, telefone ou email
        -> Editar as informações um contato
        -> Listar as informações de um contato
*/

#include <stdio.h> //printf scanf
#include <stdlib.h> //system()
#include <string.h> //strcmp()
#define MAX_CONTATOS 300

typedef struct {
    char    nome[MAX_CONTATOS][50],
            telefone[MAX_CONTATOS][20],
            email[MAX_CONTATOS][40];
    int id_ultimo;
} Agenda;

void menu(){
    printf("1 - Cadastrar um novo contato\n");
    printf("2 - Listar as informacoes de um contato\n");
    printf("3 - Editar um contato\n");
    printf("4 - Para sair\n");
}

void cadastrar(Agenda *a){
    if (a->id_ultimo + 1 > MAX_CONTATOS - 1 ){
        printf("Sua agenda esta cheia!\n");
        return;
    }   
    
    printf("Informe o nome do contato:\n");
    fflush(stdin);
    gets(a->nome[a->id_ultimo+1]);


    printf("Informe o email do contato:\n");
    fflush(stdin);
    gets(a->email[a->id_ultimo+1]);

    printf("Informe o telefone do contato:\n");
    fflush(stdin);
    gets(a->telefone[a->id_ultimo+1]);

    a->id_ultimo += 1;
}

int buscar(Agenda *a){
    char info[100];
    printf("Informe o nome, telefone ou email do contato que deseja: ");
    fflush(stdin);
    gets(info);

    for(int i = 0; i < MAX_CONTATOS; i++) {
        if(strcmp(a->nome[i], info) == 0 || strcmp(a->email[i], info) == 0 || strcmp(a->telefone[i], info) == 0){
            return i;
        }
    }
    return -1; //Se não encontrar o contato
}

void listar(Agenda *a, int id){
    if(id == -1){
        printf("\nContato nao existente!");
        return;
    }
    printf("\n Nome: %s \t Email: %s \t Telefone: %s\n", a->nome[id], a->email[id], a->telefone[id]);
    system("pause");
}

void editar(Agenda *a, int id) {
    if(id == -1) {
        printf("\nContato nao existente");
        return;
    }

    printf("Informe o nome do contato:\n");
    fflush(stdin);
    gets(a->nome[id]);


    printf("Informe o email do contato:\n");
    fflush(stdin);
    gets(a->email[id]);

    printf("Informe o telefone do contato:\n");
    fflush(stdin);
    gets(a->telefone[id]);

    printf("\nContato editado com sucesso!\n");
    system("pause");
}

int main() {
    Agenda a;
    a.id_ultimo = 0;
    int op = 0;

    while(op != 4){
        system("cls");
        menu();
        scanf("%d", &op);

        switch(op){
            case 1:{
                cadastrar(&a);
                break;
            }
            case 2:{
                listar(&a, buscar(&a));
                break;
            }
            case 3:{
                editar(&a, buscar(&a));
                break;
            }
            default:{
                if(op!=4)
                    printf("Opcao invalida! Tente novamente...");
            }
        }
    }
    return 0;
}