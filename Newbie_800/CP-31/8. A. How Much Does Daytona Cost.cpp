#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,k,i;
    cin >> t;
    while (t--) {

        cin >> n >> k;
        vector<int> a(n);
        for (i=0;i<n;i++) {
            cin >> a[i];
        }
        for (i=0;i<n;i++) {
            if (a[i]==k) {
                cout << "Yes\n";
                break;
            } else if (i==n-1 && k!=a[i]) {
                cout << "No\n";
            }
        }
    }
    return 0;
}