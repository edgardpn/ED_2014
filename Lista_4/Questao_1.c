#include<stdlib.h>
#include<stdio.h>

struct node
{
	int id;
	char nome[40];
	float qthoras;
	float salh;
	char depto[3];
	int  matricula;
	struct node *next;
};

struct node *top;
float saltotal=0,salmax=0;
int id=0;

void push(char nome[40],float qthoras,float salh,char depto[3],int matricula)
{
   struct node *nw;
   nw=(struct node*)malloc(sizeof(struct node));
   if(nw != NULL){
   	nw->id=id+1;
		strcpy(nw->nome,nome);
		nw->qthoras=qthoras;
		nw->salh=salh;
		strcpy(nw->depto,depto);
		nw->matricula=matricula;
		nw->next=NULL;
		}if(top==NULL){
				top=nw;
            id++;
       }else{
        	nw->next=top;
         top=nw;
         id++;
		}
}

int localizasalmax()
{  int idsalmax; 
	if(top==NULL)
     {
	  printf("\nVazio!");
	  return -1;
	  }
     else{
     	
     	struct node *ptr;
		ptr=top;
		salmax=ptr->salh;
		idsalmax=ptr->id;
		while(ptr->next!=NULL){
			if (salmax < ptr->salh){
        		salmax=ptr->salh;
				idsalmax=ptr->id;
			}ptr=ptr->next;  
	  	}	
	  }
	return idsalmax;
}
   
void main(){
	int op,n,resp;
	char nome[40],depto[3];
	float qthoras,salh;
	int matricula;
	float val;
	system("clear");

	while(op!=11){
	printf("\n");
	printf("|__________________MENU______________________|\n");
	printf("|                                            |\n");
	printf("| 1)ADICIONAR funcionario.                   |\n");
	printf("| 2)Informações sobre salário.               |\n");	
	printf("| 11)SAIR                                    |\n");
	printf("|____________________________________________|\n");
	printf("\nDigite uma opção: ");
	scanf("%d",&op);
	
			switch(op){
			case 1:
				printf("Digite o nome do cliente:");
				scanf("\n %40[^\n]",nome);
				
				printf("Digite quantidade de horas:");
				scanf("%f", &qthoras);				
				
				printf("Digite salario:");
				scanf("%f",&salh);
				
				printf("Digite o depto:");
				scanf("\n %3[^\n]",depto);
				
				printf("Digite a matrícula:");
				scanf("%d",&matricula);
				push(nome,qthoras,salh,depto,matricula);
				break;
			case 2:
				resp=localizasalmax();
				if(resp==0){
                                    printf("Erro!");
                                    
                                }else{
                                    printf("%d",salmax);
                                }
				
				break;
					
	}
}
}