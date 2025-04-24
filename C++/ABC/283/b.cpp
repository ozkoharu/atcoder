#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q_num;
    cin >> q_num;
    for (int i = 0; i < q_num; i++) {
        int query, k, x;
        cin >> query;
        if (query == 1) {
            cin >> k >> x;
            a[k - 1] = x;
        }else {
            cin >> k;
            cout << a[k - 1] << endl;
        }
    }
    return 0;
}
