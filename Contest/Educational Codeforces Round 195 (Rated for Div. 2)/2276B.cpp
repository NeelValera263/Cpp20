#include <iostream>
#include <string>

void solve() {
    std::string s;
    std::cin >> s;

    bool has_000_or_111 = false;
    bool has_010_or_101 = false;

    int n = s.length();

    for (int i = 1; i < n - 1; i++) {

        if (s[i-1] == s[i] && s[i] == s[i+1]) {
            has_000_or_111 = true;
        }

        if (s[i-1] != s[i] && s[i-1] == s[i+1]) {
            has_010_or_101 = true;
        }
    }

    int ans = 1;
    if (has_000_or_111) ans++;
    if (has_010_or_101) ans++;

    std::cout << ans << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}