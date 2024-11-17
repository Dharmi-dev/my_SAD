#include <iostream>
#include <queue>
using namespace std;

class Queue {
public:
  int *data;
  int qfront;
  int rear;
  int size;

  Queue() {
    size = 1001;
    data = new int[size];
    qfront = 0;
    rear = 0;
  }

  void enqueue(int val) {
  if (rear == size) {
    cout << "queue is full" << endl;
  } else {
    data[rear] = val;
    rear++;
  }
}

void dequeue() {
  if (qfront == rear) {
    cout << "queue is empty" << endl;
  } else {
    data[qfront] = -1;
    qfront++;

    if (qfront == rear) {
      qfront = 0;
      rear = 0;
    }
  }
}

int qfront() {
  if (qfront == rear) {
    cout << "queue is empty" << endl;
    return -1;
  } else {
    return data[qfront];
  }
}

bool isEmpty() {
  if (qfront == rear) {
    return true;
  } else
    return false;
}


};



int main(){

}