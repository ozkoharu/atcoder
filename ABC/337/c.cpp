#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            a[i]--;
        }
    }

    // 逆引き用の配列
    std::vector<int> target(n);
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            target[a[i]] = i;
        }
    }

    int s = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            // 銭湯の次を見る
            s = i;
        }
    }

    std::vector<int> ans{s};
    for (int i = 0; i < n - 1; i++) {
        s = target[s];
        ans.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        std::cout << ans[i] + 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}
