#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    vector<int> min_target(26);
    for (int i = 0; i < 26; i++) {
        min_target[i] = i; 
    }

    for (int i = 0; i < n / 2; i++) {
        int left_char = s[i] - 'a';
        int right_char = s[n - 1 - i] - 'a';
        
        if (left_char != right_char) {
            min_target[left_char] = min(min_target[left_char], right_char);
            min_target[right_char] = min(min_target[right_char], left_char);
        }
    }

    int operations = 0;
    
    for (int x = 25; x >= 1; x--) {
        if (min_target[x] < x) {
            operations++;
            min_target[x - 1] = min(min_target[x - 1], min_target[x]);
        }
    }

    cout << operations << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}