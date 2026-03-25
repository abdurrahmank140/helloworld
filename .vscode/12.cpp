#include<iostream>
using namespace std;
class ogrenci{
    private:
    string ad;
    int not1,not2,not3;
    public:
        void setbilgi(string a,int n1,int n2,int n3){
            ad=a;
            not1=n1;
            not2=n2;
            not3=n3;
        }
        double ortalamahesapla(){
            return(not1+not2+not3) /3.0;
        }
        void bilgilerigoster(){
            cout<<"ad:"<<ad<<endl;
            cout<<"ortalama:"<<ortalamahesapla()<<endl;
            if (ortalamahesapla()>=50)
            cout<<"gecti"<<endl;
            else
            cout<<"kaldı"<<endl;
        }
};
int main(){
    ogrenci o1;

    o1.setbilgi("abdurahman",70,85,90);
    o1.bilgilerigoster();
    return 0 ;
}