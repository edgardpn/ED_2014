#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
float aux;
aux = *a;
*a = *b;
*b = aux;
}

void main(){
    float a=22.4,b=55.6;
    printf("%2.1f %2.1f \n",a,b);
    troca(&a,&b);
    printf("%2.1f %2.1f \n",a,b);
}

