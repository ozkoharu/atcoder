#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    if(0<a && b==0) {
        //純金
        cout << "Gold" << endl;
        return 0;
    }
    if(a==0&&0<b) {
        cout << "Silver" << endl;
        return 0;
    }
    if (0 < a && 0 < b) {
        cout << "Alloy" << endl;
        return 0;
    }
}