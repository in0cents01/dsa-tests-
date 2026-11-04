#include <stdio.h> 
#include <stdlib.h> 
 
struct node {
  int data ; 
  struct node *link ; 
} ;  
void add_at_end(struct node *head    , int data ) {
  struct node *ptr  , *temp ;  
  ptr  = head ; 
  temp  = (struct node*)malloc(sizeof(struct node))  ; 
  temp  -> data  = data ; 
  temp  -> link  = NULL  ;  
  while (ptr  -> link != NULL ) {
    ptr  = ptr  -> link  ; 
  } 
  ptr -> link  = temp ; 
} 
void printlist_traversing(struct node *head ) {
 
  if(head  == NULL ) return  ; 
  struct node *ptr  = head ; 
  while (ptr != NULL ) {
    printf(" %d "  , ptr  -> data ) ; 
    ptr  = ptr  -> link ; 
  } 
  printf("\n") ; 
} 
int main() { 
  
  struct node *head  = malloc(sizeof(struct node )) ; 
  head  -> data  = 10 ; 
  head  -> link  = NULL ; 
  add_at_end(head  , 20 ) ; 
  add_at_end(head  , 30)  ;  
  printlist_traversing(head) ; 

  return  0 ; 
}
