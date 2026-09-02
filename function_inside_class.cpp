#include <bits/stdc++.h>
using namespace std;

// A class is a user-defined data type that groups related data and functions.
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    // Constructor initializes the data members when an object is created.
    Person(string name, int age, int marks1, int marks2)
    {
        // 'this->' refers to the current object's data member.
        // It is used here because the parameter names are the same as the data members.
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }

    // Member function to display the person's name and age.
    void hello()
    {
        cout << name << " " << age << endl;
    }

    // Member function that returns the total of the two marks.
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    // Create a Person object and pass values to the constructor.
    Person rakib("Rakib Ahsan", 24, 80, 90);

    // Call the member function using the object.
    rakib.hello();

    // Call total_marks() and print the returned value.
    cout << "Total marks->" << " " << rakib.total_marks() << endl;

    return 0;
}