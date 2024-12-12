#include<iostream>
using namespace std;

// int binarySearch(int arr[],int n,int key){
//     int s = 0;
//     int e = n;
//     while(s<=e){
//         int mid = (s+e)/2;
        
//         if(arr[mid] == key){ return mid;}
//         else if(arr[mid]> key){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return -1;
// }
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key) return mid;
        if(arr[mid]> key){
            e = mid-1;
            // binarySearch(arr[],);
        }else{
            s = mid+1;
        }
    }
    return -1;
}



int main(){
    int n;
    int key;
    cout<<"enter the len of array";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the elemtn"<<endl;
        cin>>arr[i];
    }
    
    cout<<"enter the key to find : "<<endl;
    cin>>key;
    
    binarySearch(arr,n,key);
    
}