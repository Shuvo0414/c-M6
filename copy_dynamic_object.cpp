#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("Rakib Ahsan", 20);
    Person *sakib = new Person("Sakib ahsan", 21);

    /*
    This only copies the address stored in sakib to rakib.
    Both pointers will point to the same object.
    If we delete sakib, the object is destroyed, and rakib
    will also point to the destroyed object (dangling pointer).
    */
    // rakib = sakib;

    // We can copy the data members one by one, but this requires writing each member separately.
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;

    // This copies the complete object from sakib to the object pointed to by rakib.The two pointers still point to different objects.
    *rakib = *sakib;

    delete sakib;

    // rakib still points to its own object, so its data is still valid.
    cout << rakib->name << " " << rakib->age << endl;

    delete rakib; // Free the memory allocated for rakib.

    return 0;
}