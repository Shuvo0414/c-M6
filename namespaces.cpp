#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age1 = 24;

    void hello()
    {
        cout << "Rakib Namespace" << endl;
    }
}

namespace Sakib
{
    int age2 = 28;

    void hello()
    {
        cout << "Sakib Namespace" << endl;
    }
}

/*
    A namespace is used to group related variables, functions, classes, etc.

    We can access a member of a namespace using the scope resolution operator (::).

    Example:
        Rakib::age1
        Sakib::age2

    If we use 'using namespace Rakib;' or 'using namespace Sakib;', we can access their members directly without writing the namespace name.

    However, we need to be careful if two namespaces contain members with the same name. The compiler may become confused about which member we are referring to and give an ambiguity error.

    Using the namespace name explicitly is safer when there are members with the same name.

    Example:
        Rakib::hello();
        Sakib::hello();
*/

using namespace Rakib;
using namespace Sakib;

int main()
{
    /*
        We can also access namespace members directly because
        we used 'using namespace Rakib;' and 'using namespace Sakib;'.
    */

    // cout << Rakib::age1 << endl;
    // cout << Sakib::age2 << endl;

    cout << age1 << endl;
    // hello1(); // when the function name also the different then we call the function like that. but the function name is same the we call function with there namespace name.
    Rakib ::hello();
    cout << age2 << endl;

    // hello2()
    Sakib::hello();

    return 0;
}