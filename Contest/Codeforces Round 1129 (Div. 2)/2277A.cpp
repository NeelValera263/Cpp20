#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (x <= n) {
            cnt[x]++;
        }
    }

    int available = 0;
    int max_mex = 0;

    for (int v = 0; v <= n; ++v) {

        available += cnt[v];

        if (cnt[v] == 0 || available < k) {
            break;
        }

        available -= k;

        max_mex = v + 1;
    }

    cout << max_mex << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}