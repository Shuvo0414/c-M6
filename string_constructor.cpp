#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // 1
    // string s = "Hello";
    // // 2
    // string s("Hello world");

    // 3
    // string s("Hello world", 7); // output is : Hello w. because: add bro

    // 4
    string a = "Hello World";
    string b(a, 4);

    // 5
    string s(26, 'a'); // output is : 26-> aaaaaaaaaaaaaaaaaaaaaaaaaa

    cout << s;
    cout << b;

    return 0;
}