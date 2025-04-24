#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<bool> can(w + 1);
    for (int i = 0; i < n; i++ ){
        if (a[i] <= w) can[a[i]] = true;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) {
                continue;
            }
            int s = a[i] + a[j];
            if ( s <= w) can[s] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++){
            if (i == j) {
                continue;
            }
            int s = a[i] + a[j] + a[k];
            if ( s <= w) can[s] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= w; i++) {
        if (can[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}