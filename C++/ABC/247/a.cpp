#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    string T(4, 0);
    T[0] = '0';
    T[1] = s[0];
    T[2] = s[1];
    T[3] = s[2];
    cout << T << endl;
    return 0;
}