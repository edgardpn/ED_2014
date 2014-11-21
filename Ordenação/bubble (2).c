#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
 
 clock_t begin, end;
double time_spent;
begin = clock();
  //int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
 
  int tamanho = 100;
  int aux,j,r,i,*vetor;

        FILE *inputfile;
        inputfile = fopen("input.txt", "r");

        vetor  =  (int *)calloc(tamanho, sizeof(int));

        for (i = 0;i< tamanho;i++){
        
            fscanf(inputfile, "%d", &vetor[i]);
        } 
 		
 		printf("\nValores inseridos:\n");      

        for(i = 0;i < tamanho;i++){

             printf("%d ", vetor[i]);

        }
 		printf("\nValores ordenados: \n");
 
  for(i=tamanho-1; i >= 1; i--) {  
 
    for(j=0; j < i ; j++) {
 
      if(vetor[j]>vetor[j+1]) {
 
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
 
        }
      }
    }
 
  for(r = 0; r < 100; ++r){
 
    printf("%d ",vetor[r]);
 }
 end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\n\nTempo de execução: %f \n",time_spent);
}