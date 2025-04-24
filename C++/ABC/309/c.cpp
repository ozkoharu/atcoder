#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> p(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
        total += p[i].second;
    }

    if (total <= k) {
        cout << 1 << endl;
        return 0;
    }

    sort(p.begin(), p.end());
    for (auto [a, b] : p) {
        total -= b;
        if (total <= k) {
            cout << a + 1 << endl;
            return 0;
        }
    }
    return 0;
}
