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
        system("clear");
	int i,tamvet;
	clock_t begin, end;
	double time_spent;
        
        void create();
	
	//printf("Digite a quantidade de valores para povoamento:");
	scanf("%d",&tamvet);
	int vet[tamvet];
	geraval(vet,tamvet);
	
	
	begin = clock();
	for (i = 0;i< tamvet;i++){
				enq(vet[i]);
				//printf("%d ",j);
        } 
	end = clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("\nTempo de execução do povoamento da fila (%d elementos): %f",tamvet,time_spent);
        
        begin = clock();
	display();
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTempo de execução listar fila (%d elementos): %f",tamvet,time_spent);
        
        begin = clock();
	localiza(100);
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nTempo de execução busca elemento nao existente na fila (%d elementos): %f",tamvet,time_spent);
        
        begin = clock();
	queuesize();
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTempo de execução do tamanho da fila (%d elementos): %f \n",tamvet,time_spent);
        
        begin = clock();
	frontelement();
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTempo de execução do topo da fila (%d elementos): %f \n",tamvet,time_spent);
	
        begin = clock();
	deq();
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTempo de execução remover 1 elemento da fila(%d elementos): %f \n",tamvet,time_spent);
        
        begin = clock();
	destroy();
        end = clock();
       	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nTempo de execução para destruir fila(%d elementos): %f \n",tamvet-1,time_spent);
	

}
