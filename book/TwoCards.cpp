#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, p[101], q[101];
    bool ans = false;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> q[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (k - p[i] - q[j] == 0) {
                ans = true;
                break;
            }
        }
        if (ans == true) break;
    }
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
