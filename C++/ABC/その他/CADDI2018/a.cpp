#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        if (n[i] == '2') {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
