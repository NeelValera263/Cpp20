#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,i,a,n,min=100000;
    cin >> n;


    for (i=0;i<n;i++) {
        cin >> x;
        a = abs(x);
        if (a<min) {
            min = a;
        }
    }

    cout << min;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     int n;
//     cin >> n;
//
//     int min_ops = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         min_ops = min(min_ops, abs(x));
//     }
//
//     cout << min_ops << '\n';
//     return 0;
// }