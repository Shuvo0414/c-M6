#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initialize a string using a string literal.
    // string s = "Hello";

    // 2. Initialize a string using the string constructor.
    // string s("Hello world");

    // 3. Initialize a string using the first N characters
    // of a string literal.
    //
    // string s("Hello world", 7);
    //
    // The second parameter tells C++ to take the first 7 characters.
    // "Hello world" → "Hello w"

    // 4. Create a new string from another string, starting
    // from a specific index.
    //
    // "Hello World"
    //  0123456789...
    //      ↑
    //    index 4
    //
    // Starting from index 4, the remaining characters are:
    // "o World"
    string a = "Hello World";
    string b(a, 4);

    // 5. Create a string containing 26 copies of the character 'a'.
    //
    // First parameter  → number of characters.
    // Second parameter → character to repeat.
    //
    // Result:
    // "aaaaaaaaaaaaaaaaaaaaaaaaaa"
    string s(26, 'a');

    cout << s;
    cout << b;

    return 0;
}