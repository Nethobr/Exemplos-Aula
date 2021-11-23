#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

typedef struct
{
	char		nome  [30],
				email [30];
	int			num_tel,
				cod_person;
} Dados;

typedef struct
{
	Dados person[3];
} Pessoa;

int main()
{
	//VARIÁVEIS
	Pessoa cad;
	int i, del;
	//INÍCIO
	
	//Cadastro
	for (i = 0; i < 3; i++)
	{
		printf("Nome: ");
		scanf("%s", cad.person[i].nome);
		printf("Email: ");
		scanf("%s", cad.person[i].email);
		printf("Número de telefone: ");
		scanf("%d", &cad.person[i].num_tel);
		cad.person[i].cod_person = i;
	}
	
	printf("\n");
	
	//Listagem
	for (i = 0; i < 3; i++)
	{
		printf("Cod Pessoa: %d.\n", cad.person[i].cod_person);
		printf("Nome: %s.\n", cad.person[i].nome);
		printf("Email: %s\n", cad.person[i].email);
		printf("Número de telefone: %d.", cad.person[i].num_tel);
		printf("\n");
	}	//fim for
		
	//Escolha pelo códig, qual usuário deletar
	do
	{
		printf("Deseja excluir qual usuário? ");
		scanf("%d", &del);
	} while (del >= 3);
	
	printf("\n");
	
	//imprime a nova lista dos usuários
	for (i = 0; i < 3; i++)
	{
		if (cad.person[i].cod_person != del)
		{
		printf("Pessoa %d.\n", cad.person[i].cod_person);
		printf("Nome: %s.\n", cad.person[i].nome);
		printf("Email: %s\n", cad.person[i].email);
		printf("Número de telefone: %d.", cad.person[i].num_tel);
		printf("\n");	
		}	//fim if
	}	//fim for

	return 0;	
}	//Final main
