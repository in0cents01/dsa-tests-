#include <bits/stdc++.h> 
using namespace std ; 
 
struct node {

  int data ; 
  node *next  ; 
} ;  
struct node *head = NULL ; 
void insertatFirst(int data ) {
  node *newnode = new node  ; 
  newnode  -> data  = data ; 
  newnode  -> next = head ; 
  head  = newnode ; 
} 

void insertatEnd(int data ) {
  struct node *newnode  = new node ; 
 
  if (newnode == NULL ) return ;  
  
  newnode -> data = data ; 
  newnode -> next = NULL  ; 
  node *curr = head ; 

  while(curr -> next != NULL ) {
    curr  = curr -> next ; 
  } 
  curr  -> next  = newnode ; 
} ; 
void printnode()  {

  node *ptr  = head ; 
  while (ptr != NULL ) {
    std::cout << ptr -> data << " " ; 
    ptr = ptr -> next ;  

  } 
  std::cout << "\n" ;
}
int main() {
  
  insertatFirst(1) ;
  insertatEnd(2) ; 
  insertatFirst(1) ; 
  printnode() ; 
  return  0 ; 
}
