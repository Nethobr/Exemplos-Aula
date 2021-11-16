#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

typedef struct
{
	char	nome [30];
	float	nota [3];
} Aluno;	//Registro Aluno

typedef struct
{
	int 	num;
	Aluno	a [3];
} Turma; 	//Registro Turma

typedef struct 
{
	Turma t [2];
} Escola;	//Registro Escola

int main()
{
	//VAR'S
	int i, j, k;
	Escola e;
	
	//INÍCIO
	for (i = 0; i < 2; i++)
	{
		printf("Turma: ");
		scanf("%d", &e.t[i].num);
		//aluno
		for (j = 0; j < 3; j++)
		{
			printf("Nome: ");
			scanf("%s", e.t[i].a[j].nome);
			
			//notas
			for (k = 0; k < 3; k++)
			{
				printf("N%d: ", k + 1);
				scanf("%f", &e.t[i].a[j].nota[k]);
			}	//fim for
			
			printf("\n");
		}	//fim for
		
		printf("\n");
	}	//fim for
	
	for (i = 0; i < 2; i++)
	{
		printf("Turma %d\n", e.t[i].num);
		
		//aluno
		for (j = 0; j < 3; j++)
		{
			printf("Nome: %s\n", e.t[i].a[j].nome);
			
			//notas
			for (k = 0; k < 3; k++)
			{
				printf("N%d: %.2f\n", i+1, e.t[i].a[j].nota[k]);
			}	//fim for
			
			printf("\n");
		}	//fim for
	}	//fim for
}	//fim main
