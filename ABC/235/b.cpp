#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) cin >> h[i];
 
	int ans=0;
	for (int i = 0; i < n; i++) {
		if (i == n || h[i] > h[i+1] || h[i] == h[i+1]) {
			ans = h[i];
			break;
		}
	}
	cout << ans << endl;
	return 0;
}

