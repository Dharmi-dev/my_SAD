#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            cout<<"your key is at this index "<<i<<endl;
            return 1;
        }
    }
    return -1;
}


int main(){
    int n;
    cout<<"enter len of array "<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cout<<"enter element "<<i <<endl;
        cin>>arr[i];
    }
    
    int key;
    cout<<"enter the key to find "<<endl;
    cin>>key;
    
    linearSearch(arr,n,key);
    
    
}