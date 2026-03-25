#include<iostream>
using namespace std;
class product{
private:
    string productname;
    double price;
    int quantity;
public:
    product(){
    productname="undefined";
    price=0.0;
    quantity=0;
    }
    product(string name, double p,int q){
    productname=name;
    if(p<0)
        price=0
    else{
        price=p;
    }
    }
    product(string name, double p){
        productname=name;

    }
    
