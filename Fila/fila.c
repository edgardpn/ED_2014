#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
int count = 0;

void create()
{
    front = rear = NULL;
}
 
void queuesize()
{
    printf("\n Tamanho da fila:  %d", count);
}
 
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
    count++;
}
 
void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Fila vazia!!!");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Item eliminado: %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Item eliminado: %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

void localiza(int data)
{   
    int k=0;
	front1 = front;
    if (front1 == NULL)
    {
        printf("\n Fila esta vazia!!!");
        return;
    }
    while (front1 != NULL)
    {
        if (front1->info==data)
        {
           printf("\n Item %d localizado", front1->info);   
		   return;        	
        }   
        front1 = front1->ptr;     
    }
    if (k==0)
       printf("\n Item %d nao localizado", data);   
}

int frontelement()
{   
    int e=0;
    if ((front != NULL) && (rear != NULL))
        e=(front->info);
    if (e != 0)
	   printf("\n Item de topo da fila:  %d", e);
    else
       printf("\n Fila vazia!!!");
}
 
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("\n Fila vazia!!!");
        return;
    }
    printf("\n Relatorio Itens Flla: ");      
    while (front1 != rear)
    {
        printf("\n %d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("\n %d", front1->info);
}

void destroy()
{
    front1 = front;
    if (front1 == NULL)
    {
        printf("\n Fila vazia!!!");
        return;
    }
    else
    {
        front1 = front->ptr;
        free(front);
        front = front1;
        front1 = front1->ptr;
    }
    free(front1);
    front = NULL;
    printf("\n Fila eliminada!!!");
}

