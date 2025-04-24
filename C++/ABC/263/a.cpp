#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a == b && b == c && d == e)
    {
        cout << "Yes" << endl;
    }
    else if (b == c && c == d && a == e)
    {
        cout << "Yes" << endl;
    }
    else if (c == d && d == e && a == b)
    {
        cout << "Yes" << endl;
    }
    else if (a == c && c == e && d == b)
    {
        cout << "Yes" << endl;
    }
    else if (b == d && d == e && a == c)
    {
        cout << "Yes" << endl;
    }
    else if (b == c && c == e && a == d)
    {
        cout << "Yes" << endl;
    }
    else if (a == b && d == e && b == c)
    {
        cout << "Yes" << endl;
    }
    else if (a == c && c == d && b == e)
    {
        cout << "Yes" << endl;
    }
    else if (a == b && b == e && c == d)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}