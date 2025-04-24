#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = s.length();
    for (int i = 0; i <= c/2; i++) {
        char temp = s[i * 2];
        s[i * 2] = s[i * 2 + 1];
        s[i * 2 + 1] = temp;
    }
 
    cout << s << endl;
    return 0;
}
