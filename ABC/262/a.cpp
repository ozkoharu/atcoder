#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 4 == 2)
    {
        cout << y << endl;
    }
    else if (y % 4 == 0)
    {
        cout << y + 2 << endl;
    }
    else
    {
        cout << y + y % 4 << endl;
    }
    return 0;
}