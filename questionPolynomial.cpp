#include <iostream>
using namespace std;


class node{
    public:
    int coff;
    int expo;
    node* next;

    public:
    node(){
        this->coff = NULL;
        this->expo = NULL;
        this->next = NULL;
    }


    node(int coff, int expo){
        this->coff = coff;
        this->expo = expo;
        this->next = NULL;
    }

};

void displayPolynomial(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->coff<<"x^"<<temp->expo;
        if(temp->next->coff > 0)cout<<"+";
        temp = temp->next;

    }
}

int main(){
    node head;
    node newNode(5,3);
    head = newNode;
    

}