#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main(){
	int op,n,resp;
	char nm[20],rg[10],end[30],tel[10],merc[10],data[10];
	float val;
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
	
	while(op!=11){
	printf("\n");
	printf("|__________________MENU______________________|\n");
	printf("|                                            |\n");
	printf("| 1)ADICIONAR processo.                      |\n");
	printf("| 2)REMOVER processo do TOPO.                |\n");	
	printf("| 3)REMOVER processo pelo ID.                |\n");
	printf("| 4)Exibir TODOS os processos.               |\n");
	printf("| 5)Exibir o processo do TOPO.               |\n");
	printf("| 6)Exibir QUANTIDADE de processos.          |\n");
	printf("| 7)LOCALIZAR um processo pelo ID.           |\n");
	printf("| 8)Imprimir o último processo.              |\n");
	printf("| 9)PRIORIZAR mercado.                       |\n");
	printf("| 10)PRIORIZAR processo.                     |\n");
	printf("| 11)SAIR                                    |\n");
	printf("|____________________________________________|\n");
	printf("\nDigite uma opção: ");
	scanf("%d",&op);
	
	//if(op!=20){
		switch(op){
			case 1:
				printf("Digite o nome do cliente:");
				scanf("\n %20[^\n]",nm);
				
				printf("Digite o RG do cliente:");
				scanf("\n %10[^\n]",rg);				
				
				printf("Digite o endereço do cliente:");
				scanf("\n %20[^\n]",end);
				
				printf("Digite o telefone do cliente:");
				scanf("\n %8[^\n]",tel);
				
				printf("Digite o nome do mercado:");
				scanf("\n %8[^\n]",merc);
				
				printf("Digite a data:");
				scanf("\n %10[^\n]",data);
				
				printf("Digite o valor do cheque:");
				scanf("%f",&val);
				resp=push(nm,rg,end,tel,merc,data,val);
				if((resp!=0)||(resp!=-1)){
                                    printf("Valor inserido na pilha. ID=%d",resp);
                                    
                                }else{
                                    printf("Falha ao armazenar valor na pilha.");
                                }
				break;
			case 2:
				resp=pop();
				if((resp!=0)||(resp!=-1)){
                                    printf("Valor removido na pilha. ID=%d",resp);
                                    
                                }else{
                                    printf("Falha ao remover valor na pilha.");
                                }
				break;
					
			case 3:
				printf("Digite o ID do processo que será removido:");
				scanf("%d",&n);
				removeid(n);
			   	break;
			case 4:
				display();
				break;
		
			case 5:
				printf("\nO processo do topo da pilha é:");
				imprimeporid(topelement());
                                break;
			case 6:
				printf("\nPilha possui %d processo(s)\n", stack_count());
                                break;
			case 7:
				printf("Digite o ID do processo: ");
				scanf("%d",&n);
				imprimeporid(localiza(n));
                                break;
			case 8:
				imprimelast();
				break;
			case 9:
				printf("Digite o nome do mercado que receberá prioridade: ");
				scanf ( "\n %8[^\n]", merc);
				mercup(merc);
				break;
			case 10:
				printf("Digite o ID do processo: ");
				scanf("%d",&n);
				sobeproc(n);
				break;

		//}
	}
}
}
