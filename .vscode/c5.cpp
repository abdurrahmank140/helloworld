#include<iostream>
using namespace std;

class calculator{
    public:
    static int add(int num1,int num2) {
        return num1+num2;
    }
    static int multiply(int num1,int num2) {
        return num1*num2;
    }
    calculator() {}
    ~calculator() {}
};

int main(){
    calculator calc;
    cout<<"addition:"<<calc.add(4,5)<<endl;
    cout<<"multiplication:"<<calc.multiply(4,5)<<endl;

    cout<<"addition:"<<calculator::add(5,9)<<endl;
    cout<<"multiplication:"<<calculator::multiply(4,10)<<endl;

    return 0;
}