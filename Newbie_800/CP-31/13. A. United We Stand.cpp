#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n;
    cin >> t;
    while (t--) {
        int d=1;
        cin >> n;
        vector<int> a(n);

        for (int i=0;i<n;i++) {
            cin >> a[i];
        }

        bool all_same = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_same = false;
                break;
            }
        }

        if (all_same) {
            cout << -1 << "\n";
        } else {
            sort(a.begin(),a.end());
            for (int i = 1; i < n; i++) {
            if (a[i] == a[0]) {
                d++;
            } else {
                break;
            }
        }
            cout << d << " " << n-d << "\n";
            for (int i=0;i<d;i++){
            cout << a[0] << " ";
            }
            cout << "\n";
            for (int i=d;i<n;i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int& x : a) cin >> x;
//
//         auto [mn_it, mx_it] = ranges::minmax_element(a);
//         if (*mn_it == *mx_it) {
//             cout << -1 << '\n';
//             continue;
//         }
//
//         int mn = *mn_it;
//         vector<int> b, c;
//         b.reserve(n);
//         c.reserve(n);
//
//         for (int x : a) {
//             if (x == mn) b.push_back(x);
//             else c.push_back(x);
//         }
//
//         cout << b.size() << ' ' << c.size() << '\n';
//         for (int i = 0; i < (int)b.size(); i++) {
//             cout << b[i] << (i + 1 == (int)b.size() ? '\n' : ' ');
//         }
//         for (int i = 0; i < (int)c.size(); i++) {
//             cout << c[i] << (i + 1 == (int)c.size() ? '\n' : ' ');
//         }
//     }
//     return 0;
// }