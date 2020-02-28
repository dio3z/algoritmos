#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char texto[20];
	
	FILE * c_arq;
	c_arq = fopen("arquivo.dat", "r");
		
		fgets(texto,20,c_arq);
		printf("%s", texto);
	
	fclose(c_arq);
		
}

