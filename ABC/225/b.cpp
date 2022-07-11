#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> count(n + 1);
    for (long long i = 1; i <= n - 1; i++)
    {
        long long a;
        long long b;
        cin >> a >> b;
        count[a]++;
        count[b]++;
    }
    for (long long i = 1; i <= n; i++)
    {
        if (count[i] == n - 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}