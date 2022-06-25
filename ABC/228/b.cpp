#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    x--;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    vector<bool> used(n);
    int ans = 0;
    while (!used[x]) {
        used[x] = true;
        x = a[x];
        ++ans;
    }
    cout << ans << endl;
    return 0;
}