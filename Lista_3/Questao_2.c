#include <stdio.h>
#include <stdlib.h>

void main() {
    int *v,i,num,k,executando=1;
      
    printf("Digite um valor:");
    scanf("%d",&num);
    if(num>=0){
        v=(int *)malloc(sizeof(int));
        printf("%d\n",sizeof(v));
        v[0]=num;
        i=2;
        while (executando==1){
            
            v = (int *)realloc(v,(i*sizeof(int)));
            printf("Digite outro valor:");
            scanf("%d",&num);
            if(num<0){
                executando=0;
                break;
            }
            v[i-1]=num;
            i++;
        }    
        for(k=0;k<(i-1);k++){
            printf("A posição %d do vetor é: %d \n",k,v[k]);
        }
        free(v);
        v=NULL;    
    }else{printf("Nenhum valor armazenado. \n");}
}
