#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char option;
    cout << "Enter num1: " << num1 ;
    cin >> num1 ;
    cout<<"\n";
    cout << "Enter num2: " << num2 ;
    cin >> num2 ;
    cout<<"\n";
cout << "Select Calculation Type: "<< endl;
cout << "+ Addition:"<< endl;
cout << "- Subtraction:"<< endl;
cout << "* Multiplication:"<< endl;
cout << "/ Division:"<< endl;
cout << "\n \n";
cout << "Enter Calculation Type: ";
cin >> option;


switch(option){
    case '+':
    cout << "Addition of numbers " << num1 << " + " << num2 << " = "<< num1+num2; 
    break;
    case '-':
    cout << "Subtraction of numbers " << num1 << " - " << num2 << " = "<< num1-num2; 
    break;
    case '*':
    cout << "Multiplication of numbers " << num1 << " * " << num2 << " = "<< num1*num2; 
    break;
    case '/':
    cout << "Division of numbers " << num1 << " / " << num2 << " = "<< num1/num2; 
    break;
    default: 
    cout << "Invalid operator" << endl;
    
}
    return 0;
}