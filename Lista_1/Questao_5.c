#include <stdio.h>

void soma(float *i, float *j){
	int soma;
	soma=*i+*j;
	*i=soma;
}

void main(){
	float a, b,arit,pond;
        printf("Digite o primeira valor: ");
        scanf("%f",&a);
        printf("Digite o segundo valor: ");
        scanf("%f",&b);
	soma(&a,&b);
	printf("Valor1= %2.1f e valor2= %2.1f\n", a,b);
}
