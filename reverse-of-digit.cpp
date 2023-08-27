#include <iostream>
// #include <string>

using namespace std;

int main()
{
    int num,length,rev=0,digit;
    cout << "Enter a number: ";
    cin >> num;
    // string numStr=to_string(num);
    // length = numStr.length();
    // if(length>=2){
        while(num != 0){
            digit = num%10;
            rev = rev*10+digit;
            num /= 10;
            
        }
        cout << "Reversed number: " << rev <<endl;
        
    // }else{
    //     cout << "Only one Digit !"<<endl;
    //     cout << num;
    // }

    return 0;
}
