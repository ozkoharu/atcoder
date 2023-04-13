#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int x = 9; x >= 0; x--) {
        int wari = (1 << x); // 2のx乗
        cout << (n / wari) % 2; // 割り算の結果に応じて０または１を表示
    }
    cout << endl;
    return 0;
}
