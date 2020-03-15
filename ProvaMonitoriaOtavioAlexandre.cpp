#include <stdlib.h>
//#include <iostream>
#include <String.h>
#include <stdio.h>
//#include <conio.h>

typedef struct agenda
{
	char nome[300][50], telefone[300][20], email[300][40];
} agenda;

int cont = 0;

void menu()
{
	printf("\n 1 - Cadastrar novo contato \n");
	printf("\n 2 - Alterar os dados de um contato \n");
	printf("\n 3 - Consultar um contato \n");
	printf("\n 4 - Sair do Programa \n");
}

void cadastro(agenda *x)
{
	printf("\n Digite o nome do novo contato \n");
	fflush(stdin);
	gets(x->nome[cont]);
	printf("\n Digite o telefone do novo contato \n");
	gets(x->telefone[cont]);
	printf("\n Digite o e-mail do novo contato \n");
	gets(x->email[cont]);
	printf("\n Cadastro realizadado com sucesso... \n\n");
	system("pause");
	cont++;
}

int busca(agenda x)
{
	char aux[50];
	printf("\n Digite o nome, telefone ou e-mail do contato que deseja consultar \n");
	fflush(stdin);
	gets(aux);
	for (int k = 0; k < cont; k++)
	{
		if ((strcmp(aux, x.nome[k])) == 0 || (strcmp(aux, x.telefone[k])) == 0 || (strcmp(aux, x.email[k])) == 0)
		{
			return k;
		}
	}
	printf("\n ERROR...ERROR...ERROR...ERROR... \n");
	return 0;
}

void alterar(agenda *x)
{
	int k, op;
	char aux[50];
	k = busca(*x);
	printf("\n 1 - alterar nome \n");
	printf("\n 2 - alterar telefone \n");
	printf("\n 3 - alterar e-mail \n");
	scanf("%d", &op);
	if (op == 1)
	{
		printf("\n Digite o novo nome para esse contato \n");
		fflush(stdin);
		gets(x->nome[k]);
	}
	if (op == 2)
	{
		printf("\n Digite o novo telefone para esse contato \n");
		fflush(stdin);
		gets(x->telefone[k]);
	}
	if (op == 3)
	{
		printf("\n Digite o novo email para esse contato \n");
		fflush(stdin);
		gets(x->email[k]);
	}
	printf("\n Alteracao feita com sucesso \n");
	system("pause");
}

void lista(agenda x, int k)
{
	printf("\n Nome : %s \n", x.nome[k]);
	printf("\n Telefone : %s \n", x.telefone[k]);
	printf("\n E-mail : %s \n", x.email[k]);
	printf("\n\n Pesquisa feita com sucesso  \n");
	printf("\n  \n");
	system("pause");
}

int main()
{
	agenda p;
	int op, k;
	while (op != 4)
	{
		system("cls");
		menu();
		scanf("%d", &op);
		system("cls");
		if (op == 1)
		{
			cadastro(&p);
		}
		if (op == 2)
		{
			alterar(&p);
		}
		if (op == 3)
		{
			k = busca(p);
			lista(p, k);
		}
	}
}
