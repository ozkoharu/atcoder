#include <bits/stdc++.h>
using namespace std;
char a[101][101];
int main()
{
  int h, w;
  cin >> h >> w;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  bool flag = false;
  int x = 0, y = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (a[i][j] == 'o')
      {
        if (flag)
          ans = abs(x - i) + abs(y - j);
        x = i;
        y = j;
        flag = true;
      }
    }
  }
  cout << ans;
  return 0;
}