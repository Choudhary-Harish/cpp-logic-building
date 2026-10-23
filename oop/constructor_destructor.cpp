
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    Student(const string& studentName) : name(studentName) {
        cout << "Constructor called for " << name << '\n';
    }

    void display() const {
        cout << "Student name: " << name << '\n';
    }

    ~Student() {
        cout << "Destructor called for " << name << '\n';
    }
};

int main() {
    Student student("Harish");
    student.display();

    cout << "End of main function body\n";

    return 0;
}
