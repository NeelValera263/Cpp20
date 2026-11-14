#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t,n,i,d,temp=0;
    string s;
    cin >> t;
    while(t--){
        temp=0;
        cin >> n;
        cin >> s;
        d = ranges::count(s,'.');
        for(i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                temp=1;
            }
        }
        if(temp){
                cout << 2 << "\n";
            } else {
                cout << d << "\n";
            }
    }
    return 0;
}