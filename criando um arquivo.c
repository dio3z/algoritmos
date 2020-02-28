#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void ignite()
{
	
	FILE * c_arq;
	c_arq = fopen("arquivo.dat", "w");
		fprintf(c_arq, "Igor lindao");
		
		fclose(c_arq);
}

int main()
{
	char op;
	
	printf("Vai escrever alguma coisa no arquivo?");
	scanf("%d", &op);
	
	if(op == 'S' || op == 's')
	{
		ignite();
	}
	
}
