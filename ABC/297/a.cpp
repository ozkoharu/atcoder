#include <bits/stdc++.h>
using namespace std;

int t[10000001];

int main() {
    int n,d;
    cin >> n >> d;
    bool ans = false;
    int ans_time = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    for (int i = 0; i + 1 < n; i++) {
        if (t[i + 1] - t[i] <= d) {
            cout << t[i + 1] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
