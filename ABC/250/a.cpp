#include <bits/stdc++.h>
using namespace std;

int main () {
    int h, w, r, c;
    cin >> h >> w; 
    cin >> r >> c;

    int ans = 0;
    if (c != 1) ans++;
    if (r != 1) ans++;
    if (c != w) ans++;
    if (r != h) ans++;
    cout << ans << endl;
    return 0;


}