﻿#include<iostream>

using namespace std;

class Student {
private:
    string name;
    char gender;
public:
    Student() {
        name = "Unknown";
        gender = 'u';
    }
    Student(string name)
    {
        this->name = name;
        this->gender = 'u';
    }
    Student(char gender)
    {
        this->gender = gender;
        this->name = "Unknown";
    }
    Student(string name, char gender)
    {
        this->name = name;
        this->gender = gender;
    }
    void display() {
        cout << "Name: " + name << endl;
        if (gender == 'u') { cout << "Gender: Unknown" << endl; }
        if (gender == 'm') { cout << "Gender: Male" << endl; }
        if (gender == 'f') { cout << "Gender: Female" << endl; }
    }







};
int main() {
    Student s1;
    s1.display();
    Student s2("Quang");
    s2.display();
    Student s3('m');
    s3.display();
    Student s4("Thu", 'f');
    s4.display();
    return 0;
}