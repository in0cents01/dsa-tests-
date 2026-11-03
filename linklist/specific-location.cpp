#include <iostream>
using namespace std;

struct node {
  int data;
  node *next;

  node(int d) {
    data = d;
    next = nullptr;
  }
};

node *head = nullptr;

void insertAtpos(int data, int pos) {
  if (pos < 0) {
    cout << "invalid\n";
    return;
  }

  node *newnode = new node(data);

  if (pos == 0) {
    newnode->next = head;
    head = newnode;
    return;
  }

  node *temp = head;
  for (int i = 0; temp != nullptr && i < pos - 1; ++i) {
    temp = temp->next;
  }

  if (temp == nullptr) {
    cout << "pos out of bounds\n";
    delete newnode;
    return;
  }

  newnode->next = temp->next;
  temp->next = newnode;
}

void printlist() {
  node *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout << endl;
}

int main() {
  insertAtpos(10, 0);   // 10
  insertAtpos(30, 1);   // 10 30
  insertAtpos(20, 1);   // 10 20 30
  insertAtpos(99, 5);   // pos out of bounds
  printlist();          // 10 20 30
  return 0;
}
