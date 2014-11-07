struct node
{
       int item;
       struct node *next;
};

struct node *top;

int push(int n);
int pop();
void display();
int topelement();
int stack_count();
void localiza(int n);
