#include<stdlib.h>
#include<stdio.h>
#include "pilha.h"

int procid=1,qtdproc=0;


int push(char nm[20],char rg[10],char end[30],char tel[10],char merc[10],char data[10],float val)
{
    struct node *nw;
    struct node *ptr;
    struct node *ant;
    nw=(struct node*)malloc(sizeof(struct node));
    if(nw != NULL){
   	nw->procid=procid++;
	strcpy(nw->nome,nm);
	strcpy(nw->endereco,end);
	strcpy(nw->identidade,rg);
	strcpy(nw->telefone,tel);
	strcpy(nw->mercado,merc);
	strcpy(nw->data,data);    	  
    	nw->valor=val;
        nw->next=NULL;
	if(top==NULL){
            top=nw;
	    qtdproc++;
        }else if((top->valor)<=(nw->valor)){
		nw->next=top;
		top=nw;
		qtdproc++;
	}else{
		ptr=top;
		while(((nw->valor)<=(ptr->valor))&&(ptr->next!=NULL)){
		ant=ptr;
		ptr=ptr->next;
		}	
		if(((nw->valor)>(ptr->valor))){
			ant->next=nw;
			nw->next=ptr;
			qtdproc++;
		}else{
			ptr->next=nw;
			qtdproc++;
		}
    }
	return nw->procid;		
    }else
   return -1;
}
    

int pop(){
     int ID;
     struct node *ptr;
     if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n") ;
	  return 0;
     }
     else
     {
     	ID=top->procid;
	ptr=top;
	top=top->next;
	free(ptr);
	qtdproc--;
        return ID;
     }
}

int display()
{
	struct node *ptr;
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
	  return 0;
     }
     else{
	printf("\nOs elementos da pilha são:");
	for(ptr=top; ptr!=NULL; ptr=ptr->next){
	printf("\n___________________\n");
	printf("Processo ID:%d",ptr->procid);
	printf("\nNome: %s",ptr->nome);
	printf("\nEndereço: %s",ptr->endereco);
	printf("\nIdentidade: %s",ptr->identidade);
	printf("\nTelefone: %s",ptr->telefone);
	printf("\nMercado: %s",ptr->mercado);
	printf("\nData: %s",ptr->data);
	printf("\nValor: %.2f",ptr->valor);
	}
   	printf("\n____________________\n");
     }
}

int topelement()
{
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
	  return 0;
     }
     else{	
	return top->procid;
	}
}

int stack_count()
{
	return qtdproc;
}

int localiza(int n)
{  
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
	  return 0;
     }
     else{ 
	int ver,cont,pos;
    	struct node *ptr;
	ver=0;
	cont=1;
	ptr=top;
		while((ptr->procid != n)&&(ptr->next!=NULL)){
		cont++;
		ptr=ptr->next;
		}	
		if (ptr->procid == n){
        		ver=1;
			printf("\nO processo com ID=%d está na pilha na posição %d.",n,cont);
			return(ptr->procid);
		
	}if (ver==0)
        printf("\nO elemento %d não está na pilha.\n",n);
        return 0;  
     }
        
}

int imprimeporid(int n)
{  
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
	  return 0;
	  }
     else{ 
	
	int ver,cont,pos;
    	struct node *ptr;
	ver=0;
	
	for(ptr=top; ptr!=NULL; ptr=ptr->next){
		
				
		if (ptr->procid == n){
        	printf("\nProcesso ID:%d",ptr->procid);
			printf("\nNome: %s",ptr->nome);
			printf("\nEndereço: %s",ptr->endereco);
			printf("\nIdentidade: %s",ptr->identidade);
			printf("\nTelefone: %s",ptr->telefone);
			printf("\nMercado: %s",ptr->mercado);
			printf("\nData: %s",ptr->data);
			printf("\nValor: %.2f",ptr->valor);
			printf("\n");
			ver=1;
		}
	return ptr->procid;
	}if (ver==0)
        printf("\nO elemento %d não está na pilha.\n",n); 
   }
        
}

int imprimelast()
{  
	 if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
	  return 0;
	  }
     else
	 { 
		struct node *top1;
 		top1=top;
		int i=qtdproc;
		for(i;i>=1;i--)
		{
			if (i==1)
			{
    	    	printf("\nProcesso ID:%d",top1->procid);
				printf("\nNome: %s",top1->nome);
				printf("\nEndereco: %s",top1->endereco);
				printf("\nIdentidade: %s",top1->identidade);
				printf("\nTelefone: %s",top1->telefone);
				printf("\nMercado: %s",top1->mercado);
				printf("\nData: %s",top1->data);
				printf("\nValor: %.2f",top1->valor);
				printf("\n");
		return top1->procid;
			}
			top1=top1->next;
		}  
     }
}

int removeid(int id){
	struct node *ptr;
	struct node *ant;
	ptr=top;
	if(top==NULL)
	{
    	  printf("\nA pilha esta vazia!\n") ;
    	  return 0;
	}else if(ptr->procid==id){
	return pop();
	}else{
		while((ptr->procid!=id)&&(ptr->next!=NULL)){
			ant=ptr;
			ptr=ptr->next;
		}
		if(ptr->procid==id){
		ant->next=ptr->next;
		qtdproc--;
		free(ptr);
		return id;
		}else{
		return 0;
		}
	}
}

int mercup(char merc[10]){
	if(top==NULL)
	{
    	  printf("\nA pilha esta vazia!\n") ;
    	  return -1;
	}else if(strcmp(top->mercado,merc)!=0) {
		struct node *ptr;
		struct node *ant;
		struct node *temp;
		int qtd=0;
		ptr=top;
		while(ptr->next!=NULL){
			ant=ptr;
			ptr=ptr->next;
			if(strcmp(ptr->mercado,merc)==0){
				qtd++;
				if(qtd==1) {
					temp=top;
					top=ptr;
					ant->next=ptr->next;
					ptr->next=temp;			
				}else {
					temp=top->next;
					top->next=ptr;
					ant->next=ptr->next;				
					ptr->next=temp;
			
				}
			}
		}
	return 1;
	}else {return 0;}
}

int sobeproc(int id){
	struct node *ptr;
	struct node *ant;
	struct node *temp;
	ptr=top;
	if(top==NULL)
	{
    	  printf("\nA pilha esta vazia!\n") ;
    	  return 0;
	}else if(ptr->procid==id){
	return -1;
	}else{
		while((ptr->procid!=id)&&(ptr->next!=NULL)){
			ant=ptr;
			ptr=ptr->next;
		}
		if(ptr->procid==id){
			temp=top;
			top=ptr;
			ant->next=ptr->next;
			ptr->next=temp;	
			return top->procid;
		return id;
		}else{
		return 0;
		}
	}
}

	
