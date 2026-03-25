#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class student{
    private:
    string name;
    double grade;
    int studentid;

    public:

    student(){
    name="unknown";
    grade=0;
    studentid=0;
    }

    student(string n,double g,int s){
        if(g<0 or g>100)
        grade=0;
        else
        grade=g;

        if(s<100)
        studentid=100;
        else
        studentid=s;
    }

    student(string n,double g){
    name=n;
    if(g<0 or g>100)
    grade=0;
    else
    grade=g;

    studentid=100+rand()%999;
    }

    void addbonus(double bonus){
        if(bonus<0)
        cout<<"invalid bonus"<<endl;
        return;

        grade+=bonus;

        if(grade>100)
        grade=100;
    }
    bool reducegrade(double amount){
        if(amount<0)
        cout<<"invilaid reduction"<<endl;
        return false;

        if( grade-amount<0)
        cout<<"grade cannot be negative"<<endl;
        return false;

        grade-=amount;
        return true;
    }
    void display(){
        cout<<"student information:"<<endl;
        cout<<"grade:"<<grade<<endl;
        cout<<"studentid:"<<studentid<<endl;
        cout<<"name:"<<name<<endl;
    }
};

int main(){
    srand(time(0));

    student o1;

    string name2;
    double grade2;
    int s2;

    cout<<"enter details for student2:";
    cout<<"name:";
    cin>>name2;
    cout<<"grade:";
    cin>>grade2;
    cout<<"studentid:";
    cin>>s2;

    student o2(name2,grade2,s2);

    string name3;
    double grade3;

    cout<<"enter details for student3:";
    cout<<"name:";
    cin>>name3;
    cout<<"grade:";
    cin>>grade3;

    student o3(name3,grade3);

    double bonus;
    cout<<"enter  bonus for student:";
    cin>>bonus;
    o2.addbonus(bonus);

    double reduction;
    cout<<"enter reduction amount for student3:";
    cin>>reduction;
    o3.reducegrade(reduction);

    cout<<"----student details---";

    o1.display();
    o2.display();
    o3.display();

    return 0;
}