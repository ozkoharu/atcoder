#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'v')
        {
            ans += 1;
        }
        else
        {
            ans += 2;
        }
    }
    cout << ans << endl;
    return 0;
}