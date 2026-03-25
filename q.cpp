#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	char gender;
	int age;
	
	cout<<"Enter your name: ";
	cin>>name;
	
	cout<<"Enter your gender:(M or F): ";
	cin>>gender;
	
	cout<<"Enter your age: ";
	cin>>age;
	
	cout<<"Your name is "<<name<<endl;
	cout<<"Your gender is "<<gender<<endl;
	cout<<"Your age is "<<age;
	
	return 0;
}
