#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;


  Node(int val){ // constructor
    this->data = val;
    this->next = NULL;
    this->prev = NULL;
  }

  Node(Node* prev, int val, Node* next){
    this->prev = prev;
    this->next = next;
    this->data = val;
  }
};

void print(Node *head){
  Node* temp = head;

  while(temp->next != NULL){
    cout<<temp->data <<" ";
    temp = temp->next;
  }  
  // cout<<"inside print"<<endl;
  cout<<temp->data<<endl;
}


void insertStart(Node*& head,int val){
  if(head == NULL){
    Node* temp = new Node(val);
    head = temp;
  }
  else{
    Node* newNode = new Node(val)  ;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    cout<<"added "<<newNode->data<<" into list"<<endl;
  }
  
}

void insertEnd(Node*& tail, int val){
  Node* newNode = new Node(val);
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
  cout<<"inserted "<<newNode->data<< " at the end"<<endl;
}

// void insertPorisition(Node* &head, int position,int val){
//   Node* newNode = new Node(val);

//   Node* curr = head;
//   // Node* previous;
//   int cnt = 1;
//   while(cnt < position){
//     curr = curr->next;
//   }
//   // newNode->next = curr->next;
//   // newNode->prev = curr;
//   curr->prev->next = curr->next;
//   cout<<"added at specific position"<<endl;
// }

void insertPosition(Node* &head, int position, int val){
  if (position == 1) {
    insertStart(head, val);
    return;
  }

  Node* newNode = new Node(val);
  Node* curr = head;
  int cat = 1;
  while(cat < position - 1 && curr->next != NULL){
    curr = curr->next;
    cat++;// you forgotten to add increment to cat **do remember next time;
  }

  if (curr->next == NULL) {
    insertEnd(curr, val);
    return;
  }

  newNode->next = curr->next;
  curr->next->prev = newNode;
  curr->next = newNode;  
  newNode->prev = curr;

  cout<<" added "<<val<<" at position "<<position<<endl;
}






int main(){
  
  Node* head = NULL;
  Node* tail = NULL;
  Node* node1 = new Node(10);
  head = node1;
  tail = node1;


  print(head);

  insertStart(head,34);
  print(head);

  insertStart(head,65);
  print(head);

  insertStart(head,25);
  print(head);

  insertEnd(tail,100);
  print(head);

  insertPosition(head,3,3);
  print(head);
}

