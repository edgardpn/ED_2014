#include <stdio.h>

void cresc(int *i, int *j){ 
    if(*j>*i){
	int aux;
	aux = *i;
	*i = *j;
	*j = aux;
    
    }else{
        printf("Nada a fazer. \n");
        }
}

int main(){
	int a, b;
        printf("Digite um valor inteiro para a: ");
        scanf("%d",&a);
        printf("Digite um valor inteiro para b: ");
        scanf("%d",&b);
	cresc(&a,&b);
        printf ("a:%d \nb:%d \n", a, b);
	return 0;
}
