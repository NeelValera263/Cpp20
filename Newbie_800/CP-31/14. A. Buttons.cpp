#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,a,b,c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a==b) {
            if (c%2==0) {
                cout << "Second" << "\n";
            } else {
                cout << "First" << "\n";
            }
        } else if (a>b) {
            cout << "First" << "\n";
        } else {
            cout << "Second" << "\n";
        }
    }
    return 0;
}