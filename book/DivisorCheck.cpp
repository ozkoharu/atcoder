#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool flag = false;
    for (int i = a; i <= b; i++) {
        if (100 % i == 0) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
