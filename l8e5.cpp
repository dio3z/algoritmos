#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int numero(int v[], int tam, int a[], int *qA, int b[], int *qB)
{
	int j, par = 0, impar = 0;
	for(j = 0; j < tam; j++)
	{
		if(v[j]%2 == 0)
		{
			a[par] = v[j];
			par++;
		}
		else
		{
			if(v[j]%2 == 1)
			{
				b[impar] = v[j];
				impar++;
			}
		}
	}
	*qA = par;
	*qB = impar;
}


int main()
{
	int vetor[12]= {1,2,3,4,5,6,7,8,9,10,11,13};
	int par[10];
	int	impar[10];
	int i, resul, qA, qB;
	
	
	printf("Vetor original: ");
	for(i = 0; i < 12; i++)
	{
		printf("%d ", vetor[i]);
	}
	
	resul = numero(vetor, 12, par, &qA, impar, &qB);
	
	printf("\nPar: ");
	for(i = 0; i < qA; i++)
	{
		printf("%d, ", par[i]);
	}
	
	printf("\nImpar: ");
	for(i = 0; i < qB; i++)
	{
		printf("%d, ", impar[i]);
	}
}

