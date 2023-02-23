#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int yes = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == "For") yes++;
    }
    if (yes > n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
