#include<iostream>
#include<string>
using namespace std;

int main(){
	int age;
	string city, name;

	cout<<"Enter your Name: ";
	getline(cin, name);

	cout<<"Enter your age: ";
	cin>> age;
	cin.ignore();

	cout<<"Enter your city: ";
	getline(cin, city);

	cout<< "your Name is: " << name << endl;
	cout<< "Your age is: " << age <<endl;
	cout<<"Your city is : " << city << endl;

	return 0;
}
