#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x,y;
    cin >> n;
    int taka = 0;
    int aoki = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;

        taka = taka + x;
        aoki = aoki + y;
    }
    if (taka < aoki) {
        cout << "Aoki" << endl;
    } else if (taka == aoki) {
        cout << "raw" << endl;
    } else {
        cout << "Takahashi" << endl;
    }
    return 0;
}
