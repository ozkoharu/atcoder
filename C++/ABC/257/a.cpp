#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int num = (x - 1) / n;
    char a = 'A' + num;
    cout << a << endl;
    return 0;
}