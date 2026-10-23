
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& personName) : name(personName) {}

    void introduce() const {
        cout << "Name: " << name << '\n';
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(const string& studentName, int roll)
        : Person(studentName), rollNumber(roll) {}

    void display() const {
        introduce();
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Harish", 101);
    student.display();

    return 0;
}
