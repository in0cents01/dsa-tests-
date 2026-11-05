#include <stdio.h> 
#include <stdlib.h> 
 
struct node {
  int data; 
  struct node *link ; 
} ;  
 
void add_at_pos(struct node *head   , int data  , int pos ) {
  struct node *ptr2  = malloc(sizeof(struct node)) ; // ptr2 position at 3 
  struct node *ptr  = head ; 
  head  = ptr ;  
  if(head  == NULL ) return;  


  ptr2  -> data  = data ; 
  ptr2  -> link  = NULL ; 
  pos-- ; 
  while(pos != 1 ) {
    ptr  = ptr -> link ; 
    pos-- ;  
  } 
  ptr2 -> link  = ptr  -> link ; 
  ptr  -> link  = ptr2 ; 
} 
void add_at_end(struct node *head  , int data ) {
  struct node *newnode  = (struct node*)malloc(sizeof(struct node)) ;  
  newnode -> data  = data ; 
  newnode -> link  = NULL ; 
  struct node *curr  = head ; 
  while (curr -> link  != NULL ) {
    curr   = curr -> link ; 
  } 

  curr  -> link  = newnode ; 
}
int main() 
{ 

  struct node *head  = malloc(sizeof(struct node));  
  head  -> data  = 45 ; 
  head  -> link  = NULL ; 
  add_at_end(head  , 98) ; 
  add_at_end(head  ,3 ) ; 

  int data  = 67  , pos  = 3 ; 
  add_at_pos(head  , data , pos);  
  struct node *ptr  = head ; 
  while (ptr != NULL ) {
    printf (" %d "  , ptr  -> data ) ; 
    ptr = ptr  -> link ; 
  }
 
  printf ("\n");  
  return  0 ; 
}
