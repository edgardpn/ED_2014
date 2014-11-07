#include<stdlib.h>
#include<stdio.h>
#include "pilha.h"

void push(int n)
{
	struct node *nw;
	nw=(struct node*)malloc(sizeof(struct node));
	nw->item=n;
	nw->next=NULL;
	if(top==NULL)
	{
		top=nw;
	}
	else
	{
		nw->next=top;
		top=nw;
	}
}

int pop(){
     int item;
     struct node *ptr;
     if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
     }
     else
     {
	item=top->item;
	ptr=top;
	top=top->next;
	free(ptr);
     }
return item;
}

void display()
{
	struct node *ptr;
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
     }
     else{
	printf("\nOs elementos da pilha são:\n");
	for(ptr=top; ptr!=NULL; ptr=ptr->next){
	printf("_____\n");
	printf("| %d |\n", ptr->item);
	}
   	printf("_____\n");
	  }
}

int topelement()
{
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
     }
     else{	
	return top->item;
	}
}

int stack_count()
{
	int cont=0;
    	struct node *ptr;
	if (top == NULL){
        	printf("\nPilha esta vazia!\n");
    	}else{
	for(ptr=top; ptr!=NULL; ptr=ptr->next)
		cont++;
	}
	return cont;
}

void localiza(int n)
{  
	if(top==NULL)
     {
	  printf("\nA pilha esta vazia!\n");
     }
     else{ 
	//int n,
	int ver,cont,pos;
    	struct node *ptr;
	ver=0;
	cont=0;
	for(ptr=top; ptr!=NULL; ptr=ptr->next){
		
			cont++;	
		if (ptr->item == n){
        		ver=1;
			printf("\nO elemento %d está na pilha na posição %d.",n,cont);
		}
	}if (ver==0)
        printf("\nO elemento %d não está na pilha.\n",n);  
     }
        
}




