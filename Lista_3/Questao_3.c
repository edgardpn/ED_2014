#include <stdio.h>
#include <stdlib.h>

void main() {
    int n=5,*v,i;
    
//    printf("Digite o tamanho do vetor:");
//    scanf("%d",&n);
    v=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Digite a posição %d do vetor:",i);
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
        printf("A posição %d do vetor é: %d \n",i,v[i]);
    }
        free(v);
        v=NULL;    
}
