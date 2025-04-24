#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = n*4;
    vector<int> a(sum);
    vector<int> b(n);
    for (int i = 0; i < sum; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = i;
    vector<int> count(n);
    int loop;
    int ans = 0;
    for(int i = 0; i < sum; i ++) {
        
        if (b[loop] == a[i]) {
            count[i]++;
        }
        loop++;
        if (loop == 4) loop = 0;
        if (count[i] == n-1) {
            ans = loop;
        }
    }
    cout << ans << endl;
    return 0;
    
}