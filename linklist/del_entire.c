#include <stdio.h> 
#include <stdlib.h> 
 
struct node  {

  int data ; 
  struct node *link ; 
};   

void add_at_end(struct node *head  , int data  ) {
  struct node *temp  = (struct node*)malloc(sizeof(struct node)) ;  
  temp  -> data  = data  ;  
  temp  -> link  = NULL ; 
  struct node *curr = head ; 
  while (curr -> link != NULL ) {
    curr = curr  -> link; 
  } 
  curr -> link  = temp ;
}
 
struct node* del_list(struct node *head ) {

  struct node *temp  = head ; 
  if (head == NULL ) {
    printf ("list is empty now ") ; 
  }
  while  (temp != NULL ) {
    temp   = temp  -> link ; 
    free(head) ;  
    head   = temp ; 
  } 
  return head; 
}
int main() {
  
  struct node *head  = (struct node*)malloc(sizeof(struct node));  
  head  -> data  = 45 ; 
  head -> link  = NULL; 
  add_at_end(head  , 98 ) ; 
  add_at_end(head  , 3) ;  
 
  del_list(head) ;  
  struct node *ptr  = head ; 
  while (ptr != NULL ) {
    printf(" %d "  , ptr  -> data ) ; 
    ptr  = ptr  -> link; 
  } 
  printf("\n") ; 
  return  0 ;  
}
