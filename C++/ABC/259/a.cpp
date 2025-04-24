#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    int ans = 0;
    if (m > x)
    {
        cout << t << endl;
    }
    else if (x == m)
    {
        cout << t << endl;
    }
    else
    {

        ans = (t - (x * d)) + m * d;
        cout << ans << endl;
    }
    return 0;
}