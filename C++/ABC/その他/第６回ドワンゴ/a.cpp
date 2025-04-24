#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> playlist(n);
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int b;
        cin >> b;
        playlist.at(i) = make_pair(a, b);
    }
    string x;
    cin >> x;
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (playlist[i].first == x) {
            count = i;
        }
    } 
    for  (int j = count+1; j < n; j++) {
        ans += playlist[j].second;
    }
    cout << ans << endl;
   return 0;
}
