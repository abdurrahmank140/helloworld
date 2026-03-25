#include<iostream>
using namespace std;
class ogrenci {
    public:
    int not1,not2,not3;
    float ortalama;

    ogrenci(int n1,int n2,int n3){
        not1=n1;
        not2=n2;
        not3=n3,

        ortalama=(not1+not2+not3)/3.0;
    }

    void yazdir(){
        cout<<"1.not:"<<not1<<endl;
        cout<<"2.not:"<<not2<<endl;
        cout<<"3.not:"<<not3<<endl;
        cout<<"ortalama:"<<ortalama<<endl;
    }
};

int main(){
    ogrenci ogr1(75,80,90);

    ogr1.yazdir();

    return 0;
}