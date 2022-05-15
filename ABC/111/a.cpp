#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int x = 111; x <= 999; x+=111) {
		if (x >= n) {
			cout << x << endl;
			return 0;
		}
	}
	return 0;
}

