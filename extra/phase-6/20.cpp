#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id,age;
    string name,course,email,college;
};

void registerStudent(Student& s) {
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter student age: ";
    cin >> s.age;
    cout << "Enter student course: ";
    cin.ignore();
    getline(cin, s.course);
    cout << "Enter student email: ";
    getline(cin, s.email);
    cout << "Enter student college: ";
    getline(cin, s.college);
}

void displayStudent(const Student& s) {
    cout << "Student ID: " << s.id << endl;
    cout << "Student Name: " << s.name << endl;
    cout << "Student Age: " << s.age << endl;
    cout << "Student Course: " << s.course << endl;
    cout << "Student Email: " << s.email << endl;
    cout << "Student College: " << s.college << endl;
}

int main() {
    Student stu;

    cout << "Registration Form:" << endl;
    registerStudent(stu);

    cout << "\nRegistered Student Information:" << endl;
    displayStudent(stu);

    return 0;
}

