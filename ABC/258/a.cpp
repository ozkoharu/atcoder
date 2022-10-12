#include <bits/stdc++.h>
using namespace std;

string fix(int x)
{
    if (x < 10)
    {
        return string{'0'} + to_string(x);
    }
    else
    {
        return to_string(x);
    }
}

int main()
{
    int k;
    cin >> k;
    int h = k < 60 ? 21 : 22;
    int M = k % 60;
    cout << h << ':' << fix(M) << endl;
}