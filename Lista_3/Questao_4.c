#include <stdio.h>
#include <stdlib.h>

void main() {
    int n=5,*v,i,qtdpar=0;
    
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);
    v=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Digite a posição %d do vetor:",i);
        scanf("%d",&v[i]);
        if(v[i]%2==0){
            qtdpar++;
        }
    }
    printf("Quantidade de par: %d\n",qtdpar);
    printf("Quantidade de impar: %d \n",n-qtdpar);
        free(v);
        v=NULL;    
}
