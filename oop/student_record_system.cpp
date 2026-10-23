
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    double marks;

public:
    Student(int roll, const string& studentName, double studentMarks)
        : rollNumber(roll), name(studentName), marks(studentMarks) {}

    int getRollNumber() const {
        return rollNumber;
    }

    void display() const {
        cout << "Roll Number: " << rollNumber
             << " | Name: " << name
             << " | Marks: " << marks << '\n';
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Exiting.\n";
            return 1;
        }

        if (choice == 1) {
            int roll;
            string name;
            double marks;

            cout << "Enter roll number: ";
            if (!(cin >> roll)) {
                cout << "Invalid roll number.\n";
                return 1;
            }

            bool exists = false;

            for (const Student& student : students) {
                if (student.getRollNumber() == roll) {
                    exists = true;
                    break;
                }
            }

            if (exists) {
                cout << "Roll number already exists.\n";
                continue;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter name: ";
            getline(cin, name);

            cout << "Enter marks: ";
            if (!(cin >> marks)) {
                cout << "Invalid marks.\n";
                return 1;
            }

            if (marks < 0 || marks > 100) {
                cout << "Marks must be between 0 and 100.\n";
                continue;
            }

            students.emplace_back(roll, name, marks);
            cout << "Student added successfully.\n";
        } else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records available.\n";
            } else {
                for (const Student& student : students) {
                    student.display();
                }
            }
        } else if (choice == 3) {
            int roll;

            cout << "Enter roll number to search: ";
            if (!(cin >> roll)) {
                cout << "Invalid roll number.\n";
                return 1;
            }

            bool found = false;

            for (const Student& student : students) {
                if (student.getRollNumber() == roll) {
                    student.display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.\n";
            }
        } else if (choice == 4) {
            cout << "Exiting Student Record System.\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
