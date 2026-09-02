#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Using a normal for loop, we can access both the index and the element.
    // Use this loop when we need to work with both the index and the element.
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    // A range-based for loop is a shorter and simpler way to traverse a container.
    // Use it when we only need the elements and do not need their indexes.
    for (char c : s)
    {
        cout << c << " ";
    }

    return 0;
}