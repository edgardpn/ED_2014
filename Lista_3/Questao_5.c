#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char sobrenome[20];
    int anonascimento;
}nodoaluno;

void main (){
    int numalunos,i;
    nodoaluno *nw;
	 nw = (nodoaluno*)malloc(sizeof(nodoaluno));
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &numalunos);
		

    
    for (i=0; i < numalunos; i++)
    {
        printf("Digite o sobrenome do aluno: ");
        scanf(" %s", &nw->sobrenome);
        printf("Digite a matricula do aluno: ");
        scanf(" %i", &nw->matricula);
        printf("Digite o ano de nascimento do aluno: ");
        scanf(" %i", &nw->anonascimento);
        nw++;

    }

    nw = nw - numalunos;

    for (i=0; i<numalunos; i++)
    {
        printf("Aluno %i:\n", i+1);
        printf("Sobrenome: %s\n", (nw[i]).sobrenome);
        printf("Matricula: %i\n", (nw[i]).matricula);
        printf("Ano de nascimento: %i\n", (nw[i]).anonascimento);
        printf("\n");
    }

    free (nw);
}