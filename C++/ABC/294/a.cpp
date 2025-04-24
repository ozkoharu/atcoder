#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ans;
        cin >> ans;
        if (ans % 2 == 0) {
            cout << ans << ' ';
        }
    }
    return 0;
}
