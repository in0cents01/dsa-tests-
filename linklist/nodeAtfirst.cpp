#include<bits/stdc++.h> 
using namespace std ; 
// i use singly linkedlist  
//
struct node {

  int data ; 
  node *next  ; 
} ; 
struct node *head  = NULL ; 
void insertatFirst( int data ) { 
  node *newnode  = new node ; 
  newnode -> data = data ; 
  newnode  -> next  = head   ; 
  head = newnode ; 
} 
void printnode() {
  struct node *ptr  = head ;  
  while (ptr != NULL ) {
    std::cout << ptr -> data << " " ;  
    ptr  = ptr -> next ; 
  } 
  std::cout << "\n" ; 
}
int main() {
  
  insertatFirst(1) ;   
  insertatFirst(2) ;  
  insertatFirst(2) ; 
  printnode() ; 
  return  0 ; 
}
