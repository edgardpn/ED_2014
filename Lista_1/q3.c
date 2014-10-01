#include <stdio.h>

void cresc(int *i, int *j, int *k){
	int aux; 
	if(*i==*j && *j==*k){
		printf("1\n");
	}else{
        	printf("0\n");
		if(*i>*j){
			aux = *i;
			*i = *j;
			*j = aux;
    
		}if(*i>*k){
			aux = *i;
			*i = *k;
			*k = aux;
		}if(*j>*k){
			aux = *j;
			*j = *k;
			*k = aux;
		}
	}
}	

void main(){
	int a,b,c;
        printf("Digite um valor inteiro para a: ");
        scanf("%d",&a);
        printf("Digite um valor inteiro para b: ");
        scanf("%d",&b);
        printf("Digite um valor inteiro para c: ");
        scanf("%d",&c);
	cresc(&a,&b,&c);
        printf ("a:%d \nb:%d\nc:%d\n",a,b,c);
}
