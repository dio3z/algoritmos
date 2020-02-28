#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	int a, n;
	
	FILE * c_arq;
	
	c_arq = fopen("geradorvetor.dat", "w");
	
	printf("Quantas posiçoes o vetor vai ter?");
	scanf("%d", &n);
	
	printf("Escolha um valor para divisoes");
	scanf("%d", &a);
	
	int vetor[n];
	
	
	for(i = 0; i < n; i++)
	{
		vetor[i] = rand()%a;
	}
	printf("VETOR = [");
	for(j = 0; j < n; j++)
	{
		printf("%d ", vetor[j]);
	}
	printf("]");
	
	
	fprintf(c_arq, "%d ", n);
	fprintf(c_arq, "%d\n", a);
	for(i = 0; i < n; i++)
	{
		fprintf(c_arq, "%d ", vetor[i]);
	}
	fclose(c_arq);
}
