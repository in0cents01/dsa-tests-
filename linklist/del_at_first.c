#include <stdio.h> 
#include <stdlib.h> 
 
 
struct node  {
  int data ; 
  struct node *link ; 
} ;
 

struct node* del_first(struct node *head ) {

  if (head  == NULL) {
    printf("empty") ;
  } else {
    struct node *temp  = head ; 
     head  = head  -> link ; 
    free(temp) ; 
    temp = NULL ; 
  } 
  return head ; 

}  
void insert_end ( struct node *head  , int data ) {

  struct node *temp  = malloc(sizeof(struct node)) ;  
  temp  -> data  = data ; 
  temp  -> link   = NULL; 
  struct node *curr  = head ; 
  while (curr  -> link != NULL) {
    curr  = curr-> link ; 
  } 
  curr  -> link   = temp ; 
} 
int main() { 
 
  struct node *head  = malloc(sizeof(struct node))  ; 
  head  -> data  = 10 ; 
  head  -> link  = NULL ; 
  insert_end(head  , 20 ) ;
  insert_end(head  , 30) ;  
  head  = del_first(head) ; 
  struct node *ptr  = head  ; 
  while (ptr != NULL ) {
    printf(" %d "   , ptr  -> data ) ; 
    ptr  = ptr  -> link ;
  } 
  printf("\n") ; 
  return  0 ; 
}
