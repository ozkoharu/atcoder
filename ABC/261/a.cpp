#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int l = max(l1, l2);
    int r = min(r1, r2);
    int ans = max(r - l, 0);
    cout << ans << endl;
    return 0;
}