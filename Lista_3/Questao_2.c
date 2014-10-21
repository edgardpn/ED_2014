#include <stdio.h>
#include <stdlib.h>

void main() {
    int *v,i,num;
      
    printf("Digite um valor:");
    scanf("%d",&num);
    if(num>=0){
        v=(int *)malloc(sizeof(int));
        v[0]=num;
        i=0;
        while (num>=0){
            v = (int *)realloc(v,sizeof(v)+sizeof(int));
            i++;
            printf("Digite outro valor:");
            scanf("%d",&num);
            v[i]=num;
        }    
        for(i=0;i<(sizeof(v)/2);i++){
            printf("A posição %d do vetor é: %d \n",i,v[i]);
        }
        free(v);
        v=NULL;    
    }else{printf("Nenhum valor armazenado. \n");}
}
