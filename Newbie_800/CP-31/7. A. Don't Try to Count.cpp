#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,m,i;

    cin >> t;
    while (t--) {
        i=0;
        bool g = true;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        while (g) {
            if (x.find(s) == string::npos) {
                x = x + x;
                i++;
                if (i>10) {
                    cout << -1 << "\n";
                    g = false; //break
                }
            } else {
                cout << i << "\n";
                g = false; //break
            }
        }
    }
    return 0;
}