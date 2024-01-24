#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int length = s.size();
    for (int i = 0; i < length; i++) {
        if (s[i] == ' ') {
            continue;
        }

        if (s[i] == 'B' && s[i + 1] == 'A') {
            std::cout << "No" << std::endl;
            return 0;
        }
        if (s[i] == 'C' && s[i + 1] =='A') {
            std::cout << "No" << std::endl;
            return 0;
        }
        if (s[i] == 'C' && s[i + 1] == 'B') {
            std::cout << "No" << std::endl;
            return 0;
        }

    }
    std::cout << "Yes" << std::endl;
    return 0;
}
