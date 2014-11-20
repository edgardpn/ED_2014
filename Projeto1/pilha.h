//Estrutura do nó
struct node
{
	int  procid;
	char nome[20];
	char endereco[30];
	char identidade[10];
	char telefone[10];
	char mercado[10];
	char data[10];
	float valor;  
	struct node *next;
};

//Variáveis Globais
struct node *top;

//Funções Públicas
int push(char nm[20],char rg[8],char end[20],char tel[8],char merc[8],char data[10],float val);
int pop();
int display();
int topelement();
int stack_count();
int localiza(int n);
int imprimeporid(int n);
int imprimelast();
int removeid(int id);
int mercup(char merc[10]);
int sobeproc(int ID);

