#include <bits/stdc++.h>
using namespace std;

int main() {
  	int n;
    cin >> n;
    vector<vector<char>> data(n, vector<char>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data.at(i).at(j);
        }
    }

vector<vector<char>> ans(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                if (i == 0 && j < n - 1) {
                    ans[i][j + 1] = data[i][j]; 
                }
                if (j == n - 1 && i < n - 1) {
                    ans[i + 1][j] = data[i][j];
                }
                if (i == n - 1 && j > 0) {
                    ans[i][j - 1] = data[i][j];
                }
                if (j == 0 && i > 0) {
                    ans[i - 1][j] = data[i][j];
                }
            } else {
                ans[i][j] = data[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
