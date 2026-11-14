#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, first;
        cin >> n >> first;
        
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
        }

        if (first == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}