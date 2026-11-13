#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (k >= 2 || is_sorted(a.begin(), a.end())) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}