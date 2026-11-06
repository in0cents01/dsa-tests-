 

#include <stdio.h> 
#include <stdlib.h> 
 
struct node  {

  int data ; 
  struct node *link  ;

} ;    
void add_at_end(struct node *head  , int data  ) {

  struct node *temp   = (struct node*)malloc(sizeof(struct node)) ;  
  temp  -> data  = data ;
  temp  -> link   = NULL  ; 
  struct node *curr  = head ; 
  while (curr -> link  != NULL ) {
    curr  = curr -> link ;
  } 
  curr -> link  = temp  ; 
}

void del_pos(struct node **head  , int pos) {
  struct node *current  =  *head ; 
  struct node *previous  = *head ;  
  
  if (*head  == NULL ) {
    printf("empty") ; 
  } 
  else if (pos  == 1) {
    *head  = current -> link ; 
    free(current) ;  
    current  = NULL ; 
  } 
  else 
{ 
    while (pos != 1) { 
      previous  = current ; 
      current = current  -> link; 
      pos-- ; 
    } 
    previous -> link   = current -> link ; 
    free(current) ; 
    current = NULL  ;

  }
}
int main() {
  
  struct node *head  = (struct node*)malloc(sizeof(struct node)) ;  
  head  -> data  = 10 ; 
  head  -> link  = NULL ; 
  add_at_end(head  , 20 ) ; 
  add_at_end(head  , 30) ; 
  int pos  = 2 ;  
  del_pos(&head  , pos ) ; 
 
  struct node *ptr  = NULL ; 
  ptr  = head ;  
  if (head  == NULL ) return  0 ;  
  while (ptr != NULL ) {
    printf(" %d "  , ptr  -> data ) ;  
    ptr  = ptr  -> link ; 
  } 
  printf("\n") ; 
  return  0 ; 
}
