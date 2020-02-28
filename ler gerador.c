#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int v[])
{
	int vetor[15];
	FILE * arq;
	FILE * vet;
	
	int i, j, aux, k;
	char op;

	arq = fopen("array.txt","w");
	
    for(i = 0; i < 15; i++)
    {
    	for(j = 0; j < 15; j++)
    	{
    		if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }	
		}
	}
	for(k = 0; k < 15; k++)
	{
		fprintf(arq, "%d ", v[k]);
	}
	fclose(arq);
	printf("Vetor ordenado, deseja ver? (S-N)");
	fflush(stdin);
	scanf("%c", &op);
	
	printf("Abrindo de \aarray.txt. ...\n");
	
	vet = fopen("array.txt", "r");
	
	if(vet == NULL)
	{
		printf("Arquivo nao encontrado.");
	}
	else
	{
	
	if(op == 'S' || op == 's')
	{
		for(i = 0; i < 15; i++)
		{
			fscanf(vet, "%d", &vetor[i]);
		}
			for(i = 0; i < 15; i++)
			{
				printf("%d ", vetor[i]);
			}
	}
	fclose(vet);
}
}

int main()
{
	char arquivo[50];
	int vetor[50];
	int i;
	FILE * data;
	
	printf("Nome do arquivo gerador: ");
	gets(arquivo);
	
	data = fopen(arquivo, "r");
	
	if(strcmp(arquivo, "vetor.txt") != 0)
	{
		printf("Vetor nao encontrado.");
	}
	else
	{
		
		for(i = 0; i < 15; i++)
		{
			fscanf(data, "%d", &vetor[i]);
		}
		sort(vetor);
	}
}
