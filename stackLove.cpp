#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *data;


    Stack(){
        size = 100;
        data = new int[size];
        top = -1; 
    }

    void push(int val){
        if(size - top > 1){
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
        if(top >= size){
            return data[top];
        }

    }



    bool isempty(){
        if(top == -1){
            cout<<"condition of underflow;"
    }
    }


};