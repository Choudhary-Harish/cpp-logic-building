
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    void display() const {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << '\n';
        cout << "Roll Number: " << rollNumber << '\n';
        cout << "Marks: " << marks << '\n';
    }
};

int main() {
    Student student;

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    cin >> student.rollNumber;

    cout << "Enter marks: ";
    cin >> student.marks;

    student.display();

    return 0;
}
