#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int a = l + n - 1;
    int array[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        array[i] = l + i;
    }
    int s = 0;
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        int t = s - array[i];
        if (abs(t - s) < abs(ans - s))
            ans = t;
    }
    cout << ans << endl;
    return 0;
}