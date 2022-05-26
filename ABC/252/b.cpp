#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[k];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < k; j++) {
        cin >> b[j];
    }

    int a_max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a_max) a_max = a[i];
    }
    for (int i = 0; i < k; i++) {
        if (a[b[i] - 1] == a_max) {
            cout << "Yes" << endl;
            return 0;
        }

    }
    cout << "No" << endl;
    return 0;
}