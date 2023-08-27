// Fibonacci series
#include<iostream>
using namespace std;

int main(){

    int num1=0,num2=1,num3;
    cout << num1 << " " << num2 << " " ;
    for(int i=0;i<10;i++){
        num3=num1+num2;
        cout << num3 << " ";
        num1=num2;
        num2=num3;
    }
    return 0;
}