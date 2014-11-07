#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void main()
{
    int no, ch;
    printf("\n 1 - Inserir Item");
    printf("\n 2 - Excluir Item");
    printf("\n 3 - Pesquisar Item");    
    printf("\n 4 - Topo da Fila");
    printf("\n 5 - Qte. Itens Fila");
    printf("\n 6 - Relatorio");
    printf("\n 7 - Excluir Fila");
    printf("\n 8 - Sair");
    create();
    while (1)
    {
        printf("\n Digite opcao : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Digite item : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            printf("\n Digite numero p/ pesquisa: ");
            scanf("%d", &no);        	
            localiza(no);
            break;	            
        case 4:
            frontelement();
            break;
        case 5:
            queuesize();
            break;
        case 6:
            display();
            break;
        case 7:
            destroy();
            break;            
        case 8:
            exit(0);
        default:
            printf("\n Digite opção correta:");
            break;
        }
    }
}
