#include<iostream>
using namespace std;
class ogrenci{
public:
    string ad;
    int numara;
    int notu;

    void bilgilerigoster(){
        cout<<"ad:"<<ad<<endl;
        cout<<"numara:"<<numara<<endl;
        cout<<"notu:"<<notu<<endl;
    }
    void gectimi(){
        if (notu>50) 
        cout<<"durum:gecti"<<endl;
        else
        cout<<"durum:kaldı"<<endl; 
    }
};

int main(){
    ogrenci O1 ;

    O1.ad="abdurahman";
    O1.numara=102;
    O1.notu=48;

    O1.bilgilerigoster();
    O1.gectimi();

    return 0;
}