#include<iostream>
using namespace std;

class number{
    int value;

    public:
    number(int v=0):value(v){}

    number operator-(){ 
    return number(-value)
    
    }
};