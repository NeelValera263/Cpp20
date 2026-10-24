#include <iostream>

void solve() {
    int a, b;
    std::cin >> a >> b;
    if (a <= b) {
        std::cout << -1 << "\n";
    } else {
        std::cout << std::min(b, a - b) << "\n";
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}