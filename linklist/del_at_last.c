#include <stdio.h> 
#include <stdlib.h> 
 
 
struct node {
  int data ; 
  struct node *link ; 
} ; 
  
void add_at_end(struct node *head  , int data ) {

  struct node *curr  = (struct node*)malloc(sizeof(struct node)) ;  
  curr -> data  = data  ; 
  curr -> link  = NULL ; 
  struct node *ptr  = head;  
  while (ptr  -> link != NULL ) {
    ptr  = ptr  -> link ; 

  } 
  ptr -> link  = curr ; 

}
struct node* del_last(struct node *head ) {
 
  if (head == NULL) return 0; 
  if (head  -> link  == NULL ) {
    free(head) ; 
    head  = NULL ;
  } 
  else 
{
    struct node *temp  = head ;
    struct node *temp2  = head ; 
    while (temp -> link != NULL ) {

      temp2  = temp   ; 
      temp   = temp  -> link ;     

    } 
    temp2  -> link   = NULL ; 
    free(temp) ; 
    temp  = NULL ; 
} 
  return head ; 

}
int main() {
  
  struct node *head  =(struct node*)malloc(sizeof(struct node)) ; 
  head  -> data  =  10 ;  
  head  -> link  = NULL ; 
  add_at_end(head  , 20) ; 
  add_at_end(head  , 30) ; 
  head  = del_last(head) ; 
 
  struct node *ptr  =  head ; 
  while (ptr != NULL ) {
    printf( " %d " ,  ptr  -> data ) ; 
    ptr  = ptr  -> link ; 
  }
  printf("\n") ; 
  return  0 ;
}
