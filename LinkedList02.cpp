#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data = val;
    next = NULL;
  }



};


int main(){
  Node *Head;
  // Head = new Node(4);


  int arr[5] = {0,5,7,2,9};

  // for(int i=0; i<5 ; i++){
  //   if(Head == NULL){
  //     Node *temp ;
  //     temp = new Node(arr[i]);

  //     Head = temp;

  //   }
  //   else{
  //     Node *temp;
  //     temp = new Node(arr[i]);
  //     temp->next = Head;
  //     Head = temp;
  //   }
  // }


  for(int i=0;i<5;i++){
    if(Head==NULL){
      Head = arr[i];
    }
    else{
      Node temp = new Node(arr[i]);
      Head->next = newNode;
    }
  }


Node *counter;
counter = Head;
  for(int i=0;i<5;i++){
    
    
    cout<<counter->data;
    counter = counter->next;
  }


}