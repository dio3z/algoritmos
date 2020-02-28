#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	FILE * c_arq;
	c_arq = fopen("arquivo.dat", "w");
		fprintf(c_arq, "Igor lindao");
		
		fclose(c_arq);
		
	printf("Arquivo criado :)");
}

