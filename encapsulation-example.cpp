// Encapsulation example
#include <iostream>
using namespace std;

class MyClass{
    private:
    int salary;
    public:
    int set_salary(int s){
        salary = s;
    }
    int get_salary(){
        return salary;
    }
};

int main(){
    MyClass myObj;
    myObj.set_salary(21000);
    cout << "Salary: " << myObj.get_salary() << endl;
}