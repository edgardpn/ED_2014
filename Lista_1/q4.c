#include <stdio.h>

void le_notas(float *i, float *j){ 
	printf("A primeira nota é: %2.1f\n", *i);
	printf("A segunda nota é: %2.1f\n", *j);
}

void calc_media(float *i, float *j,float *k,float *m){ 
	*k = (*i+*j)/2;
	*m = (*i+(*j)*2)/3;
}

void exibe_dados(float *i, float *j, float *k,float *m){
	printf("Nota 1:%2.1f\n",*i);
	printf("Nota 2:%2.1f\n",*j);
	printf("Media aritmetica:%2.1f\n",*k);
	printf("Media ponderada:%2.1f\n",*m);
 }

void main(){
	float a, b,arit,pond;
        printf("Digite a primeira nota: ");
        scanf("%f",&a);
        printf("Digite a segunda nota: ");
        scanf("%f",&b);
	le_notas(&a,&b);
	calc_media(&a,&b,&arit,&pond);
	exibe_dados(&a,&b,&arit,&pond);
}
