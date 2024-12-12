#include <iostream>
using namespace std;


class heap{
    public:
    int arr[100];
    int size = 0;
    
    heap(){
        arr[0] = -1;
        size = 0;
    }
    
    // int *left;
    // int* right;
    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;
        
        while(index > 1){
            int parentIndex = index/2;
            if(arr[parentIndex] < arr[index]){
                // int temp = arr[parentIndex];
                // arr[parentIndex] = arr[index];
                // arr[index] = temp;
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else return;
            
        }
    }
    
    
    void hDelete(){
        if(size == 0){
            cout<<"Condition of underflow"<< endl;
            return;
        }
        arr[1]= arr[size];
        size--;
        
        //correction of position
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            
            if(arr[leftIndex]> arr[i] && leftIndex < size){
                swap(arr[leftIndex], arr[i]);
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[rightIndex], arr[i]);
            }
            else return;
        }
        
    }
    
    
    
    void print(){
        for(int i = 1; i<= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};



void heapify(int arr[], int size, int index){
    int largest = index;
    int left = 2*largest;
    int right = 2*largest + 1;
    if(arr[largest] < arr[left] && left <= size){
        largest = left;
    }
    else if(right <= size && arr[largest] < arr[right]){
        largest = right;
        
    }
    
    if(largest != index){
        swap(arr[largest], arr[index]);
        heapify(arr, size, largest);
    }
}



void heapSort(int arr[], int n){
    int size =n;
    
    while(size > 1){
        //step-1
        swap(arr[size], arr[1]);
        size--;
        
        //step-3
        heapify(arr, size, 1);
        
        cout<<"printing the array now"<<endl;
        for(int i = 1; i<n; i--){
            cout<<arr[i]<<" ";
            
        }cout<<endl;
        
        
        //heapSort
        heapSort(arr,n);
        
    }
    
    
    
}


int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
    h.hDelete();
    h.print();
    
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    
    
    for(int i = n/2; i>0; i--){
        heapify(arr,n,i);
    }
    
    cout<<"print the array now"<<endl;
    for(int i = 1; i<n; i++){
        cout<<arr[i]<<' ';
    }
    
    
    
}