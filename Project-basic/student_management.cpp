#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int rollNo;
    int age;
    float marks;
};
vector <student> students;
void addStudent(){
    student s;

    cout<<"Enter Name : ";
    cin >> s.name;
    
    cout<<"Enter Roll No. : ";
    cin >> s.rollNo;

    cout<<"Enter age : ";
    cin >> s.age;

    cout<<"Enter marks : ";
    cin >> s.marks;
    
    students.push_back(s);
}
void displayStudent(){
    for (student s : students) {
        cout << "-------------------" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Age: " << s.age << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "-------------------" << endl;
    }
}
int main(){
    addStudent();
    displayStudent();
}