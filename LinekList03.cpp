#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int value){
    data = value;
    next = NULL;
  }
};

int main(){
  int arr[5] ={2,4,6,8,0};
  Node *Head = NULL;




  for (int i=0; i<6;i++){
    if(Head == NULL){
      Head = new Node(arr[i]);
    }
    else{
      Node* newNode = new Node(arr[i]);
      Node* temp = Head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      // temp->next = newNode;
    }
  } 
Node *temp = Head;
   while(temp->next != NULL){
    cout<<temp->data<<endl;
    temp = temp->next; 
   }
}