#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int cnt = 0;
    int b_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' && cnt < a + b)
        {
            cnt++;
            cout << "Yes" << endl;
        }
        else if (s[i] == 'b' && cnt < a + b && b_cnt < b)
        {
            cnt++;
            b_cnt++;
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
