#include <iostream>
using namespace std;

int Pow(int num, int power){
  if(power == 0){
    return 1;
  }
  else return num * Pow(num, power -1);
};


int Tailward (int value){
  if(value == 1){
    cout<< value;
    
  }
  Tailward(value-1);

};


int main(){
  // int result = Pow(2,5);
  // cout<<result;

  Tailward(7);
}