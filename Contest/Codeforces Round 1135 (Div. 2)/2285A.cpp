#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,i;
    cin >> t;

    while (t--) {
        cin >> n;

        if (n>=4) {
            cout << "4 3 2 1 ";
            for (i=5;i<=n;i++) {
                cout << i << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}