#include <bits/stdc++.h>
using namespace std;

int n, x, A[109];
bool Answer = false;

int main() {
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++) {
        if (A[i] == x) Answer = true;
    }

    if (Answer == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
