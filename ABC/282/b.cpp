#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int ans = 0;
    for(int y = 0; y < n; y++) {
        for (int x = 0; x < y; x++) {
            bool ok = true;
            for (int j = 0; j < m; j++) {
                if (s[x][j] == 'x' && s[y][j] == 'x') {
                    ok = false;
                }
            }
            if (ok) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
