/*
	Name: BobbleSort.cpp
	Author: Hyago Santos
	Date: 05/10/26 20:18
	Description: 
*/

#include <stdio.h>
void bobble(int *, int);
main()
{
	int vet[] = {10,3,-9,3,12,44,-90,1,2,46,9};
	int tam = sizeof(vet)/sizeof(int);
	int i;
	
	puts("Vetor Original:");
	for(i=0; i<tam; i++){
		printf("%d|", vet[i]);
	}
	
	bobble(vet,tam);
	puts("\n\nVetor Ordenado:");
	for(i=0; i<tam; i++){
		printf("%d|", vet[i]);
	}
	
}

void bobble(int *vet, int tam)
{
	int inicio, fim, aux;
	inicio = 0; fim = tam-1; aux = 0;
	
	while(inicio < fim)
	{
		for(int i=0; i<tam-1; i++)
		{
			if(vet[i] < vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
		fim--;
	}
}
