#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main(){
	int op,n,resp;
	system("clear");
	printf("|_____________Estrutura de dados_____________|\n");
	printf("|                TDA - PILHA                 |\n");
	printf("|Alunos:                                     |\n");
	printf("| Alessandro Silva                           |\n");	
	printf("| Alexandre Leite                            |\n");
	printf("| Edgard Pitombo                             |\n");
	printf("| Roberto R.                                 |\n");
	printf("|                                            |\n");
	printf("|Professor: Danilo silva                     |\n");
	printf("| 	                           06/11/2014|\n");
	printf("|____________________________________________|\n\n");
	printf("_--__--__--__--__--__--__--__--__--__--__--__-\n\n");	
	
	while(op!=9){
	printf("\n");
	printf("|__________________MENU______________________|\n");
	printf("|                                            |\n");
	printf("| 1)ADICIONAR elemento na pilha.             |\n");	
	printf("| 2)REMOVER elemento do topo da pilha.       |\n");
	printf("| 3)Exibir TODOS os elementos da pilha.      |\n");
	printf("| 4)Exibir o elemento do TOPO da pilha.      |\n");
	printf("| 5)Exibir QUANTIDADE de elementos da pilha. |\n");
	printf("| 6)LOCALIZAR um elemento na pilha.          |\n");
	printf("| 9)Para SAIR.	                             |\n");
	printf("|____________________________________________|\n");
	printf("\nDigite uma opção: ");
	scanf("%d",&op);
	
	if(op!=9){
		switch(op){
			case 1:
				printf("Digite um valor inteiro:");
				scanf("%d",&n);
				if(push(n)==1){
                                    printf("Valor inserido na pilha.");
                                }else{
                                    printf("Falha ao armazenar valor na pilha.");
                                }
				break;
			case 2:
                            resp=pop();
                            if(resp!=0){
				printf("\nO elemento removido foi: %d \n", resp);
                            }else{
                                printf("A pilha está vazia!");
                            }
				break;
			case 3:
				display();
				break;
		
			case 4:
				printf("\nO elemento do topo da pilha é: %d\n",topelement());
				break;
			case 5:
				printf("\nPilha possui %d elementos\n", stack_count());
				break;
			case 6:
				printf("Digite o elemento que deseja procurar: ");
				scanf("%d",&n);
				localiza(n);
				break;

		}
	}
}
}
