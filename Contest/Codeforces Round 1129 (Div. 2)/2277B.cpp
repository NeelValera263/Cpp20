#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    long long min_val = 2e18;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        min_val = min(min_val, x);
    }

    if (n > min_val) {
        cout << n << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}