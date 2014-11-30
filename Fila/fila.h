struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
int enq(int data);
int deq();
void empty();
void display();
void destroy();
void create();
int queuesize();
void localiza(int data);
void geraval(int *vet,int tamvet);
