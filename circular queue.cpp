#include <iostream>
using namespace std;

class circularQueue{
    public:
    int *data;
    int qfront;
    int rear;
    int size;


    void Queue(){
    size = 1001;
    data = new int[size];
    qfront = 0;
    rear = 0;
    }


    void enQueue(int val){
        if(qfront == rear){
            cout<<"the queue is full "<<endl;
        }
    }


};





int main(){

}