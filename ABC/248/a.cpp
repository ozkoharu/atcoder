#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int ans = -1;
    for (int i = 0; i < 10; i++) {
        int a = int(s[i]- '0');
        if (a != i){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}