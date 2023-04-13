#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool ans = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (a[i] + a[j] + a[k] == 1000) {
                    if (i != j && i != k && k != j) {
                        ans = true;
                    }
                }
            }
        }
    }
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
