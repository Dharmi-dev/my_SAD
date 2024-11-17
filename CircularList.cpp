#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;


    Node(int val){
        this->data = val;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;

        }
        cout<<"memory is free from node with data : "<<value<<endl;

    }

    



};


void print(Node* tail){
    Node* temp = tail;
    
    do{
        cout<<tail->data<< " ";
        tail = tail->next;

    }
    while(tail != temp);
}


void insertNode(Node* &tail,int  element, int val){
         if(tail == NULL){
            Node* newNode = new Node(val);
            tail = newNode;
            newNode->next = newNode;
         }

         else{
            Node* curr = tail;
            while(curr->data != element){
                curr = curr->next;

            }
            
            Node* newNode = new Node(val);

            newNode->next = curr->next;
            curr->next = newNode;

         }
    }

    void deleteNode( Node* &tail,int element){
        if(tail == NULL){
            cout<< "the list is empty"<< endl;
        }
        
        Node* curr = tail;
        Node* prev = NULL;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }
        
// 1 Node linked list
        if(curr == prev){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }


int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,7);
    print(tail);

    delete tail;
    cout<<"tail has been deleted";


}