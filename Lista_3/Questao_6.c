#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alloc(int *tam,char *palavra)
{
	 palavra = (char*)malloc((*tam)*sizeof(char));

    return palavra;
}

main(){
	char *palavra;
	int *tam,i;
	printf("Digite o tamanho da palavra:");
	scanf("%i",&tam);
	
	palavra=(char*)alloc(&tam,&palavra);
	
	printf("Digite a palavra:");
	scanf("\n %[^\n]",palavra);
	
	for(i=0;i<tam;i++) {
		if(palavra[i]!='a'&&palavra[i]!='e'&&palavra[i]!='i'&&palavra[i]!='o'&&palavra[i]!='u') {
			printf("%c",palavra[i]);
			}
	}	


}

