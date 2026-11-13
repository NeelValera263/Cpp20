#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        freq[h]++;
    }
    
    int max_visible = 0;
    vector<int> left_slope;
    vector<int> right_slope;
    vector<int> hidden_middle;
    
    for (auto const& [height, count] : freq) {
        max_visible += min(count, 2);
        
        left_slope.push_back(height);
        
        if (count >= 2) {
            right_slope.push_back(height);
        }
        
        for (int i = 3; i <= count; i++) {
            hidden_middle.push_back(height);
        }
    }
    cout << max_visible << "\n";
    
    for (int h : left_slope) cout << h << " ";
    
    for (int h : hidden_middle) cout << h << " ";

    for (int i = right_slope.size() - 1; i >= 0; i--) {
        cout << right_slope[i] << " ";
    }
    cout << "\n";
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