#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans_count = 0;
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            int z = k - x - y;
            if (z >= 1 && z <= n) {
                ans_count++;
            }
        }
    }
    cout << ans_count << endl;
    return 0;
}
