#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fila.h"

void geraval(int *vetor,int tamvet)
{
    int i;
    
    srand( (unsigned)time(NULL) );

    for(i=0 ; i < tamvet ; i++)
        vetor[i]=(rand()%100);
}

void main(){

	int i,tamvet;
	clock_t begin, end;
	double time_spent;
	
	printf("Digite a quantidade de valores para povoamento:");
	scanf("%d",&tamvet);
	int vet[tamvet];
	geraval(vet,tamvet);
	
	
	begin = clock();
			
	for (i = 0;i< tamvet;i++){
				enq(vet[i]);
				//printf("%d ",j);
   } 
	
	end = clock();
	//display();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nQtd valores:%d | Tempo de execução: %f \n",tamvet,time_spent);
	
	

}
