#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a;
    cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    cout << ans << endl;
    return 0;
}