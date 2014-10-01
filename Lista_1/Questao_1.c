#include <stdio.h>

void troca(int *i, int *j){ 
	int aux;
	aux = *i;
	*i = *j;
	*j = aux;
}

int main(){
	int a, b;
	a = 5;
	b = 10;
	printf ("%d %d \n ", a, b);
	troca (&a, &b);
	printf ("%d %d \n ", a, b);
	return 0;
}
