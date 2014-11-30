#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>

int count = 0;

void create()
{
    front = rear = NULL;
}
 
int queuesize()
{
    return count;
}
 
int enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        if(!rear){
            printf("Sem memória!");
        }else{
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
        }
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        if(!rear){
            printf("Sem memória!");
        }else{
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
        }
    }
    count++;
    return rear->info;
}
 
int deq()
{
    front1 = front;
    int resp;
 
    if (front1 == NULL)
    {
        printf("\n Fila vazia!!!");
        return -99;
    }
    else{
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            resp=front->info;
            free(front);
            front = front1;
        }
        else
        {
            resp=front->info;
            free(front);
            create();
        }
        count--;
        return resp;
    }
}

void localiza(int data)
{   
    int k=0,loc=0;
	front1 = front;
    if (front1 == NULL)
    {
        printf("\n Fila esta vazia!!!");
        return;
    }else{
        while (front1 != NULL)
        {
            loc++;
            if (front1->info==data)
            {
                printf("\n Item %d localizado na posição %d da fila", front1->info,loc);
                k=1;
            	      	
           }   
            front1 = front1->ptr;     
        }
        if (k==0){
            printf("\n Item %d nao localizado", data); 
        }
    }
}

int frontelement()
{   
    if ((front == NULL) && (rear == NULL)){
        printf("\n Fila vazia!!!");
        return -99;
    }else{
       return front->info;
       
    }
}
 
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("\n Fila vazia!!!");
        return;
    }
    printf("\n");    
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear){
        printf("%d", front1->info);
    }
}

void destroy()
{
    front1 = front;
    int i;
    if (front1 == NULL)
    {
        printf("\n Fila vazia!!!");
        return;
    }
    else
	for(i=1;i=count;i++){
	deq();
	}

    printf("\n Fila eliminada!!!");
}

void geraval(int *vetor,int tamvet)
{
    int i;
    
    srand( (unsigned)time(NULL) );

    for(i=0 ; i < tamvet ; i++)
        enq(rand()%100);
}

