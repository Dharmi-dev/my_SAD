#include <iostream>
using namespace std;



class Queue{
    public:

    int *data;
    int qfront = 0;
    int rear = 0;
    int size = 0;

    Queue(){
        size = 1001;
        data = new int[size];
        qfront = 0;
        rear = 0;        
    }


    void enQueue(int val){
        if(rear == size){
            cout<<"Queue is full "<<endl;
        }else{
            rear = val;
            rear++;
            if(rear == qfront){
                rear = 0;
                qfront = 0;
            }
        }
    }

    void deQueue(){
        if(qfront == rear){
            cout<<"this is empty "<<endl;
        }else{
            qfront = -1;
            qfront++;
        }
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }else {return false;}

    }

    void front(){
        if(qfront == rear){
            cout<<"the Queue is empty ";
        }
        else{
            cout<<qfront<<endl;
            // qfront = -1;
            // qfront++;
        }
    }
};

int main(){
    
}