#include <bits/stdc++.h>
using namespace std;

int f (int x) {
    if (x == 0) {
        return 1;
    }
    int ans = x * f(x - 1);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int ans = f(n);
    cout << ans << endl;
    return 0;
}
