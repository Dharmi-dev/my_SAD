#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

public:
  Node(int value){
    data = value;
    next = NULL;

  }
  
  Node(){
    data = 0;
    next = NULL;
  }

  // Overload the << operator
  friend ostream& operator<<(ostream& os, const Node& node) {
    os << "Node data: " << node.data;
    return os;
  }
};



int main(){

  Node S1;
  // cout<<"hello world";
  cout<<S1<<endl;

  Node S2(10);
  cout<<S2<<endl;



  Node *Head;
  Head = new Node(4);
  cout<<Head->data<<endl;
  cout<<Head->next<<endl;


  // To insert the node in the starting 

  int insertInStart(Node NewNode, Node ToNode){
    NewNode->next = ToNode;
  }

}