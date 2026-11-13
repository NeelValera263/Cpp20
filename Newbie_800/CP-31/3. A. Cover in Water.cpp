#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t,n,i,d;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        d = ranges::count(s,'.');
        for(i=0;i<n;i++){
            if(s[i]==s[1+1] && s[i+1]==s[i+2] && s[i]==s[i+2]){
                cout << 2;
            }
            else {
               cout << d;
            }
        }
    }
}