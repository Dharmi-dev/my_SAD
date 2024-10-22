#include <iostream>
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
  int arr[5] = {1,2,3,4,5};
  Node *Head = NULL;
  int position;
  cout<<"after which number you want to add the no :"<<endl;
  cin>>position;

  int toBeAdded;
  cout<<"tell me the number which you want to add :"<<endl;
  cin>>toBeAdded;

Node *temp = Head;
  for(int i=0;i<5;i++){
    if(Head == NULL){
      Head = new Node(arr[i]);
      

    }
    else{
      Node *newNode = new Node(arr[i]);
      
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = newNode;

    }
  }


  while(temp->next != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }

//   Node *temp = Head;
// Node *random ;
//   while(temp->data != position){
//     temp = temp->next;
//   }
//   random = temp->next;
//   temp->next = new Node(toBeAdded);
//   temp->next->next = random;
  
}