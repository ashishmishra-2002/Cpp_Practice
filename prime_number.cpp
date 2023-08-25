// Check number is prime or not
#include <iostream>
using namespace std;

int main(){
  int num,i;
  cout << "Enter any Number: ";
  cin >> num;

  for(i=2;i<num;i++){
    if(num%i==0){
      cout << num << " is Not Prime Number.";
      break;
    }
  }
  if(num==i){
    cout << num <<" is Prime Number.";
  }
  
  return 0;
}
