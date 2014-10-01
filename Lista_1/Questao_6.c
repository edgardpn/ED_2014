#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2){
	int num;
	*x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	*x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	if(pow(b,2)>=(4*a*c)){
		if(*x1==*x2){
			num=1;	
		}else{
			num=2;
		}
	}else{
		num=0;
	}
	return(num);
}

void main(){
	int num;
	float a,b,c,x1,x2;
        printf("Digite o valor de a: ");
        scanf("%f",&a);
        printf("Digite o valor de b: ");
        scanf("%f",&b);
        printf("Digite o valor de c: ");
        scanf("%f",&c);
	num = raizes(a,b,c,&x1,&x2);
	printf("Raiz1= %2.3f e Raiz2= %2.3f\n", x1,x2);
	printf("Numero de raizes reais e distintas: %d\n",num);
}
