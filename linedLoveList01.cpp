#include <iostream>
using namespace std;



class Node{
  public:
  int data;
  Node* next;

  Node (int val){
    this->data = val;
    this->next = NULL;

  }


};

void insertStart(Node*& head, int val){
  Node* newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}

void insertEnd(Node*& head, int val){
  Node* newNode = new Node(val);
  Node* temp = head;
  
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  cout<<"inside the insertEnd " <<endl;
}

void insertBetween(Node*& head, int whereTOAdd, int whatToAdd){
  Node* newNode = new Node(whatToAdd);
  Node* temp = head;
  while(temp->data != whereTOAdd){
    temp = temp->next;
  }
  Node* adrsNext = temp->next;
  temp->next = newNode;
  newNode->next = adrsNext;
  
}

void print(Node* head){
  Node* temp = head;
  
  while(temp != NULL){
    cout<<temp->data<< " ";
    temp= temp->next;
  }
}


int main(){
  Node* head;
  head = new Node(5);
  print(head);
  cout<<endl;

  insertStart(head, 15);
  print(head);
  cout<<endl;
  
  insertEnd(head, 20);
  print(head);
  cout<<endl;

  insertBetween(head,5,17);
  print(head);


}