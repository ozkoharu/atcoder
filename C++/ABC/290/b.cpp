#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
  	string s;
  	cin >> n >> k >> s;
  	int ans = 0;
  	for (int i = 0; i < n; i++) {
      if (s[i] == 'o' && k > ans) {
        ans++;
      } else {
        s[i] = 'x';
      }
    }
  	cout << s << endl;
    return 0;
}
