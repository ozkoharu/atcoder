#include<bits/stdc++.h>
using namespace std;
long maxl=2147483647;
long minl=-2147483647;
int main(){
    long long n;
    cin >> n;
    if (n >= maxl && minl < n) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}