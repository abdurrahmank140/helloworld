#include <iostream>
using namespace std;
class araba{
    public:
    string marka;
    int hiz;
    void bilgilerigoster(){
        cout << "marka:" << marka << endl;
        cout << "hiz:" << hiz << "km/s" << endl; 
    }
    void hizartir( int miktar){
        hiz += miktar;
        cout<<"yeni hiz:"<< hiz <<"km/s"<< endl;
    }
};

int main(){
    araba a1;

    a1.marka="opel";
    a1.hiz=100;

    a1.bilgilerigoster();
    a1.hizartir(70);

    return 0;
}