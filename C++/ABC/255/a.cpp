#include <bits/stdc++.h>
using namespace std;

int main() {
  int r,c;
  cin >> r >> c;
  int a,b,f,d;
  cin >> a >> b >> f >> d;
  int sum = r + c;
  if ( sum == 3 && r < c) {
    cout << b << endl;
  } else if ( sum == 2) {
    cout << a << endl;
  } else if ( sum == 3 && r > c) {
	cout << f << endl;
  } else {
    cout << d << endl;
  }
  return 0;
}