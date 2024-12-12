#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *data;


    Stack(int size = 100){
        this->size = size;
        data = new int[size];
        top = -1; 
    }

    void push(int val){
        if(size - top >= 1){
            top++;
            data[top] = val;

        }else {
            cout<<"Stack Overflow "<<endl; 
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout<<"stack is empty "<<endl;
        }
    }


    int peek(){
        if(top < size && top >= 0 ){
            return data[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1; // Return a default value or handle the error appropriately
        }
    }



    bool isempty(){
        if(top == -1){
            return true;
        }else return false;
    }
    int* search(int x) {
        for (int i = 0; i <= top; i++) {
            if (data[i] == x) {
                return &data[i];
            }
        }
        return nullptr; 
    }

};

int main(){
    Stack s1(6);
    s1.push(5);
    s1.push(7);
    s1.push(11);
    s1.push(15);
    s1.pop();
}