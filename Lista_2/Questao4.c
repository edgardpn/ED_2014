#include <stdio.h>
#include <stdlib.h>

void mm(int *v,int *min, int *max,int tamv){
    int j;
    *min=v[0];
    *max=v[0];
    for (j = 1; j < tamv; j++) {
        if (v[j] > *max) {
            *max = v[j];
        }
        else if (v[j] < *min) {
            *min = v[j];
        }
    }
    
}

void main(){
    int i,min,max,tamv;

    printf("Digite o tamanho do vetor:");
    scanf("%d",&tamv);
    int v[tamv];
    for (i=0;i<tamv;i++){
        printf("Digite o numero de posicao %d: ",i);
        scanf("%d",&v[i]);
        }
    mm(v, &min, &max, tamv);
    printf("Valor minimo: %d e o valor maximo: %d.\n", min, max);
    
    

}