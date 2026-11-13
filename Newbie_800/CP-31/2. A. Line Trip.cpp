#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    int t,n,i,x,b;
    cin >> t;
    while(t--){
        cin >> n >> x;
        vector <int> a,d;
        
        for(i=0;i<n;i++){
            cin >> b;
            a.push_back(b);
        }

        d.push_back(a[0]-0);
        for(i=0;i<n-1;i++){
            d.push_back(a[i+1]-a[i]);
        }
        d.push_back(2*(x-a[n-1]));

        sort(d.begin(),d.end());

        cout << *(d.end()-1) << "\n";
    }
}

// Your logic for Codeforces 1901A is mathematically perfect. You successfully handled the vector initialization correctly, and your calculation for the final return stretch (`2*(x-a[n-1])`) is spot on.
//
// However, there is **one critical formatting bug** that will cause Codeforces to instantly reject this with a "Wrong Answer" verdict, plus a few ways to heavily optimize it.
//
// ### The Critical Bug: Missing Newlines
//
// You wrote `cout << *(d.end()-1);`.
// Because there are multiple test cases (`while(t--)`), your program will print the answers on the exact same line without spaces. If the answer to test case 1 is `4`, and test case 2 is `5`, your code outputs `45`. The Codeforces judge expects `4` and `5` on separate lines.
//
// **The Fix:**
//
// ```cpp
// cout << *(d.end()-1) << "\n";
//
// ```
//
// ### Optimization 1: Drop the $O(N \log N)$ Sort
//
// You used `sort(d.begin(), d.end())` just to find the largest number. Sorting forces the CPU to rearrange the entire array, which takes $O(N \log N)$ time.
// Since you only care about the maximum value, you can drop this to $O(N)$ time by using the STL functions we discussed.
//
// Replace:
//
// ```cpp
// sort(d.begin(),d.end());
// cout << *(d.end()-1) << "\n";
//
// ```
//
// With the C++20 Ranges method:
//
// ```cpp
// cout << ranges::max(d) << "\n";
//
// ```
//
// ### Optimization 2: The HFT / Pro-CP Approach ($O(1)$ Space)
//
// Right now, your Space Complexity is $O(N)$ because you allocate a second vector `d` just to hold the differences. A quantitative developer or high-rated CP coder would not create the second vector at all. They would just keep a running maximum on the fly.
//
// Here is what that exact logic looks like, keeping your space footprint strictly at $O(1)$ auxiliary space and making the code much shorter:
//
// ```cpp
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// using namespace std;
//
// int main() {
//     // Fast I/O
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, x;
//         cin >> n >> x;
//
//         vector<int> a(n);
//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//
//         // Initialize max distance with the jump from 0 to the first station
//         int max_dist = a[0] - 0;
//
//         // Check jumps between all stations
//         for(int i = 0; i < n - 1; i++) {
//             max_dist = max(max_dist, a[i+1] - a[i]);
//         }
//
//         // Check the final jump to the destination and back
//         max_dist = max(max_dist, 2 * (x - a[n-1]));
//
//         cout << max_dist << "\n";
//     }
//     return 0;
// }
//
// ```
//
// This avoids allocating the `d` vector in heap memory completely. It uses C++'s standard `max(A, B)` function to constantly overwrite `max_dist` with whichever jump is larger, directly printing the final winner at the end.