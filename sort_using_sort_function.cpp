#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Sort the string in ascending order.
    sort(s.begin(), s.end());

    // greater<char>() tells sort() to arrange characters
    // from greater to smaller, so the result is in descending order.
    // We can also use greater<T>() with other data types,
    // such as greater<int>(), greater<float>(), or greater<double>().
    sort(s.begin(), s.end(), greater<char>());

    cout << s << endl;

    return 0;
}