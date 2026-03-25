#include<iostream>
using namespace std;
class ogrenci{
    public:
    string isim;
    int yas;

    ogrenci(){
        isim="bos";
        yas=0;
    }
    ogrenci(string i, int y){
        isim=i;
        yas=y;
    }
    void yazdir(){
        cout<< isim <<""<<yas<< endl;
    }
};

int main (){

    ogrenci ogr1("abdurahman",21);
    ogrenci ogr2("mehmet",22);

    ogr1.yazdir();
    ogr2.yazdir();
}