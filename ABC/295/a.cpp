#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == "and") {
            cout << "Yes" << endl;
            return 0;
        }
        if (a[i] == "not") {
            cout << "Yes" << endl;
            return 0;
        }
        if (a[i] == "that") {
            cout << "Yes" << endl;
            return 0;
        }
        if (a[i] == "the") {
            cout << "Yes" << endl;
            return 0;
        }
        if (a[i] == "you") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
