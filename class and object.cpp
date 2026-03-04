/*Create a C++ program using Object-Oriented Programming concepts to manage a student's academic record.
Design a class named Student that contains the following:
Data Members:
Name of the student
Roll number
Marks of three subjects (stored in an array)
And display the result
Student name,Roll number,Subject marks,Total marks,Average marks*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int marks[3]; 

public:
    Student(string n, int r, int m[3]) {
        name = n;
        roll = r;
        for (int i = 0; i < 3; i++)
            marks[i] = m[i];
    }
    int total() {
        int sum = 0;
        for (int i = 0; i < 3; i++)
            sum += marks[i];
        return sum;
    }
    float average() {
        int sum = total();
        return sum / 3.0; 
    }
    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
        cout << "Total: " << total() << endl;
        cout << "Average: " << average() << endl;
    }
};

int main() {
    string name;
    int roll;
    int marks[3];
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll: ";
    cin >> roll;
    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; i++)
        cin >> marks[i];
    Student s (name, roll, marks);
    s.display();
    return 0;
}
