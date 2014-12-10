#include <stdio.h>
#include <string.h>

int tamvet = 10;


int stringParaInt(char *string) {
    int tamanho, primeira, segunda; 
    tamanho =  strlen(string);      
    primeira = string[0];           
    segunda = string[1];            
    int resultado = (tamanho * primeira) + segunda; 
    return resultado;  
    }

int hash(int valor) {
    return valor % tamvet;  
    }

void set(char valor[10],char *vet,int key){
	if(vet[key]==NULL) {
		strcpy(vet[key],valor);
	}
}

char initvet(int tamvet, char *v){
	int i;
	for (i=0; i<tamvet; i++){
	v[i]=NULL;	
	}
}

int main() {
    int i;
    char dado[10];

    printf("\nDefina o tamanho da tabela: ");
    scanf("%d", &tamvet);
    char vet[tamvet][10];
    initvet(tamvet,vet);
	 
    for (i=0; i<tamvet; i++) {
  
    printf("\nDigite uma palavra qualquer: ");
    scanf("\n %10[^\n]",dado);
    set(dado,vet,hash(stringParaInt(dado)));
    }
    
    for (i=0; i<tamvet; i++) {
  
    printf("%s", vet[i]);
    
    }

}