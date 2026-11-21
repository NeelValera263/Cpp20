#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        a.reserve(2 * n);

        int prev;
        cin >> prev;
        a.push_back(prev);

        for (int i = 1; i < n; i++) {
            int curr;
            cin >> curr;
            if (curr < prev) {
                a.push_back(curr);
            }
            a.push_back(curr);
            prev = curr;
        }

        cout << a.size() << '\n';
        for (int i = 0; i < (int)a.size(); i++) {
            cout << a[i] << (i + 1 == (int)a.size() ? '\n' : ' ');
        }
    }

    return 0;
}