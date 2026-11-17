#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,i;
    cin >> t;

    while (t--) {
        int sum1 = 0,sum2 = 0;
        cin >> n;
        vector<int> a(n-1);
        for (i=0;i<n-1;i++) {
            cin >> a[i];
        }

        for (i=0;i<n-1;i++) {
            if (a[i] >= 0) {
                sum1 += a[i];
            } else {
                sum2 += a[i];
            }
        }
        cout << -sum1-sum2 << "\n";
    }
    return 0;
}