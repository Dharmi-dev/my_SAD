#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;


  Node(int val){
    this->data = val;
  }

  Node(Node* prev, int val, Node* next){
    this->prev = prev;
    this->next = next;
    this->data = val;
  }
};


void insertStart(){
  ;
}

int main(){

}

