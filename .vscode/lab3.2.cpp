#include<iostream>
using namespace std;
class student{
private:
    string name;
    double midterm;
    double finalexam;
    double gpa;
public:
    student(string n,double m,double f){
    name = n;
    if (m>=0 && m<=100) {
        midterm=m;
    } else {
        midterm=0;
    }
    if (f>=0 && f<=100) {
        finalexam=f;
    } else {
        finalexam=0;
    }

    gpa = (m*0.4)+(f*0.6);

    void display() {
        cout << "Name: " << name << endl;
        cout << "Midterm: " << midterm << endl;
        cout << "Final: " << final << endl;
        cout << "Gpa: " << gpa << endl;
    }
}
};

int main() {
    student s1("Ahmet", 70, 80);
    student s2("Muhammet", 50, 60);

    s1.display();
    s2.display();

    return 0;
}
