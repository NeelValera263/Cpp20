#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long gd(long long c0, long long c1) {
    return (c0 * (c0 + 1)) / 2 + (c1 * (c1 + 1)) / 2 + 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        long long c0 = ranges::count(s, '0');
        long long c1 = n - c0;

        long long ft1 = min(c0, k);
        long long A = gd(c0 - ft1, c1 + ft1);

        long long ft0 = min(c1, k);
        long long B = gd(c0 + ft0, c1 - ft0);

        cout << max(A,B) << "\n";
    }
    return 0;
}