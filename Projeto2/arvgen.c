#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct Family *get_person(void);   
char related1(struct Family *pmember1, struct Family *pmember2);
char related2(struct Family *pmember1, struct Family *pmember2);
char related3 (struct Family *pmember1, struct Family *pmember2);
char set_ancestry_pai(struct Family *pmember1, struct Family *pmember2);
char set_ancestry_irmao(struct Family *pmember1, struct Family *pmember2);
char set_casal(struct Family *pmember1, struct Family *pmember2);

struct Family{
  char name[10];
  char sexo[1];  
  char father[10];
  char irmao[10]; 
  char conjuge[10];    
  struct Family *next;        
  struct Family *previous;    
  struct Family *p_to_pai;
  struct Family *p_to_irmao;
  struct Family *p_to_conjuge;  
};
void main(){
   struct Family *first = NULL;   
   struct Family *current = NULL;
   struct Family *last = NULL;   

   char more = '\0';  
   for( ; ; ){
//     printf("\nDeseja incluir dados (S / N)? ", 
 //                                       first != NULL?"nother " : "" );
     scanf(" %c", &more);
     if(tolower(more) == 'n') 
       break;
     current = get_person();
     if(first == NULL){
       first = current;           
       last = current;             
     }
     else{
       last->next = current;  /* Set next address for previous Family */  
       current->previous = last; /* Set previous address for current */
       last = current;           /* Remember for next iteration */             
     }
   }
   current = first;
   while(current->next != NULL){                       
     int parents1 = 0, parents2 = 0, parents3 = 0;      
     last = current->next;
     while(last != NULL){                     
       if(related1(current, last))    
         if(++parents1 == 1)  
           break;
       if(related2(current, last))    
         if(++parents2 == 1)  
           break;   
       if(related3(current, last)||related3(last, current))    
         if(++parents3 == 1)  
           break; 		              
       last = last->next;    
     } 
     current = current->next;
   }
   current = first;
   while (current != NULL)  {
     printf("\n%s tem %s como pai.",
                  current->name, current->father);
     if(current->p_to_irmao != NULL )
       printf("\n irmao de %s ", current->p_to_irmao->name); 
     if(current->p_to_conjuge != NULL )
       printf("\n Casado com %s ", current->p_to_conjuge->name);	         
     current = current->next;  
   }printf("\n");
   current = first;
   while(current->next != NULL){
     last = current;     
     current = current->next; 
     free(last);        
   }
}

struct Family *get_person(void){
   struct Family *temp;   
   char c;
   temp = (struct Family*) malloc(sizeof(struct Family));
//   printf("\nNome: ");
   scanf("%s", temp -> name );        
//   printf("\nSexo: ");
   scanf("%s", temp -> sexo );
//   printf("\nPai: ");
   scanf("%s", temp -> father );
//      printf("\nConjuge: ");
      scanf("%s", temp -> conjuge );    
/*   printf("\nCasado(a)? (S/N) ");   
   scanf("%s",&c); 
   if (tolower(c) == 's')
   {
      printf("\nConjuge: ");
      scanf("%s", temp -> conjuge ); 	    	
   }*/
   
   temp->next = temp->previous = NULL;
   temp->p_to_pai = temp->p_to_irmao = temp->p_to_conjuge = NULL;  
   return temp;  
}

char set_ancestry_pai(struct Family *pmember1, struct Family *pmember2){
   if((strcmp(pmember1->father, pmember2->name) == 0)){
     pmember1->p_to_pai = pmember2;
     return 1;
   }else
     return 0;
}
char set_ancestry_irmao(struct Family *pmember1, struct Family *pmember2){
   if(strcmp(pmember1->father, pmember2->father) == 0){
     pmember1->p_to_irmao = pmember2;
     return 1;
   }else
     return 0;
}

char related1 (struct Family *pmember1, struct Family *pmember2){
   return set_ancestry_irmao(pmember1, pmember2);                           
}
char set_casal(struct Family *pmember1, struct Family *pmember2){
   if(strcmp(pmember1->conjuge, pmember2->name) == 0){
     pmember1->p_to_conjuge = pmember2;
     return 1;
   }
   else
     return 0;
}
char related2 (struct Family *pmember1, struct Family *pmember2){
   return set_casal(pmember1, pmember2);                           
}
char related3 (struct Family *pmember1, struct Family *pmember2){
   return set_ancestry_pai(pmember1, pmember2);                           
}