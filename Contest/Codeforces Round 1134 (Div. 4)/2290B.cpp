#include <iostream>
#include <string>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s; 
        
        int m = 0; 
        
        
        if (s[0] == 'B') {
            m++;
        }
        
        for (int i = 1; i < n; i++) {
            
            if (s[i] == s[i-1]) {
                m++;
            }
        }
        
        cout << m << "\n";
    }
    
    return 0;
}