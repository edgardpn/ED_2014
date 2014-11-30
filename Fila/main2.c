#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main(){
	int op,n,resp,vet[20],tamvet=20;
	system("clear");
	printf("|_____________Estrutura de dados_____________|\n");
	printf("|                TDA - FILA                  |\n");
	printf("|Alunos:                                     |\n");
	printf("| Alessandro Silva                           |\n");	
	printf("| Alexandre Leite                            |\n");
	printf("| Edgard Pitombo                             |\n");
	printf("| Roberto Rangel                             |\n");
	printf("|                                            |\n");
	printf("|Professor: Danilo silva                     |\n");
	printf("| 	                           11/11/2014|\n");
	printf("|____________________________________________|\n\n");
	printf("_--__--__--__--__--__--__--__--__--__--__--__-\n\n");
	
        create();
	while(op!=9){
	printf("\n");
	printf("|__________________MENU______________________|\n");
	printf("|                                            |\n");
	printf("| 1)Inserir item                             |\n");	
	printf("| 2)Excluir item                             |\n");
	printf("| 3)Pesquisar item                           |\n");
	printf("| 4)Topo da fila                             |\n");
	printf("| 5)Quantidade de itens na fila              |\n");
	printf("| 6)Relatorio                                |\n");
        printf("| 7)Exluir fila                              |\n");
        printf("| 8)Gerar 20 valores aleatórios              |\n");
      	printf("| 9)Para SAIR.	                             |\n");
	printf("|____________________________________________|\n");
	printf("\nDigite uma opção: ");
	scanf("%d",&op);
	
	if(op!=9){
		switch(op){
			case 1:
				printf("Digite um valor inteiro diferente de -99:");
				scanf("%d",&n);
				if(enq(n)==n){
                                    display();
                                    printf("\n\nValor inserido na fila.");
                                }else{
                                    printf("\nFalha ao armazenar valor na fila.");
                                }
				break;
			case 2:
                                resp =deq();
                                if(resp==-99){
                                    printf("\n");
                                }else{
                                printf("\nO elemento removido foi: %d \n", resp);
                                }
                                display();
                            	break;
			case 3:
                                printf("\nDigite o elemento que deseja procurar: ");
				scanf("%d",&n);
                                display();
				localiza(n);
				break;
		
			case 4:
                                display();
                                resp =frontelement();
                                if(resp==-99){
                                    printf("\n");
                                }else{
                                    printf("\nO elemento do topo da fila é: %d\n",frontelement());
                                }
                               	break;
			case 5:
                                printf("\n\nFilha possui %d elementos\n", queuesize());
                                break;
			case 6:
				display();
				break;
                        case 7:
				destroy();
                                break;
			case 8:
				geraval(vet,tamvet);
				display();
                                break;
                        default:
                                printf("\n Opção incorreta. Tente novamente:");
                                break;

		}
	}
}
}
