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
  //destructor
  ~Node(){
    int value = this-> data;
    if(this->next != NULL){
      delete next;
      this->next = NULL;
    }
    cout<<"memory is free for node with data "<< value << endl;
  }


};



void insertStart(Node*& head, int val){
  Node* newNode = new Node(val);
  newNode->next = head;
  head = newNode;
  cout<<"inserted"<<newNode->data<<"at the starting"<<endl;
}

void insertEnd(Node*& head, int val){
  Node* newNode = new Node(val);
  Node* temp = head;
  
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  cout<<"inserted"<<newNode->data<<"at the end"<<endl;
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
  cout<<"inserted "<< newNode->data<<"in between"<<endl;
  
}

void print(Node* head){
  Node* temp = head;
  
  while(temp != NULL){
    cout<<temp->data<< " ";
    temp= temp->next;
  }
}

// void deleteNode(int position, Node*& head){
//   //deleting first or start node
//   if(position == 1){
//     Node* temp = head;
//     head = head->next;
//     //memory free
//     temp-> next =  NULL;
//     delete temp;

    
//   }
//   else{
//     //deleting any middle Node or last node
//     Node* curr = head;
//     Node* prev = NULL;
//     int cnt = 1;
//     while(cnt< position){
//       prev = curr;
//       curr = curr->next;
//       cnt ++;
//     }
//     prev -> next = curr -> next;
//     curr->next = NULL;
//     delete curr;


//   }
// }

void deleteNode(int position, Node*& head){
  if (position ==1){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  else{
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < position){
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    }
}


int main(){
  Node* head = NULL;
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

  insertBetween(head,17,25);
  print(head);

  deleteNode(4, head);
  print(head);


}