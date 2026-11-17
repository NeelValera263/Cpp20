#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,i,j;
    cin >> t;

    while (t--) {
        int o=0;
        char s[10][10];
        for (i=0;i<10;i++) {
            for (j=0;j<10;j++) {
                cin >> s[i][j];
            }
        }
        if (s[4][5]=='X') {
            o = o + 5;
        }
        if (s[5][4]=='X') {
            o = o + 5;
        }
        if (s[5][5]=='X') {
            o = o + 5;
        }
        if (s[4][4]=='X') {
            o = o + 5;
        }

        if (s[3][3]=='X') {
            o = o + 4;
        }
        if (s[3][4]=='X') {
            o = o + 4;
        }
        if (s[3][5]=='X') {
            o = o + 4;
        }
        if (s[3][6]=='X') {
            o = o + 4;
        }
        if (s[6][3]=='X') {
            o = o + 4;
        }
        if (s[6][4]=='X') {
            o = o + 4;
        }
        if (s[6][5]=='X') {
            o = o + 4;
        }
        if (s[6][6]=='X') {
            o = o + 4;
        }
        if (s[4][3]=='X') {
            o = o + 4;
        }
        if (s[5][3]=='X') {
            o = o + 4;
        }
        if (s[4][6]=='X') {
            o = o + 4;
        }
        if (s[5][6]=='X') {
            o = o + 4;
        }

        if (s[2][2]=='X') {
            o = o + 3;
        }
        if (s[2][3]=='X') {
            o = o + 3;
        }
        if (s[2][4]=='X') {
            o = o + 3;
        }
        if (s[2][5]=='X') {
            o = o + 3;
        }
        if (s[2][6]=='X') {
            o = o + 3;
        }
        if (s[2][7]=='X') {
            o = o + 3;
        }
        if (s[7][2]=='X') {
            o = o + 3;
        }
        if (s[7][3]=='X') {
            o = o + 3;
        }
        if (s[7][4]=='X') {
            o = o + 3;
        }
        if (s[7][5]=='X') {
            o = o + 3;
        }
        if (s[7][6]=='X') {
            o = o + 3;
        }
        if (s[7][7]=='X') {
            o = o + 3;
        }
        if (s[3][2]=='X') {
            o = o + 3;
        }
        if (s[4][2]=='X') {
            o = o + 3;
        }
        if (s[5][2]=='X') {
            o = o + 3;
        }
        if (s[6][2]=='X') {
            o = o + 3;
        }
        if (s[3][7]=='X') {
            o = o + 3;
        }
        if (s[4][7]=='X') {
            o = o + 3;
        }
        if (s[5][7]=='X') {
            o = o + 3;
        }
        if (s[6][7]=='X') {
            o = o + 3;
        }

        if (s[1][1]=='X') {
            o = o + 2;
        }
        if (s[1][3]=='X') {
            o = o + 2;
        }
        if (s[1][2]=='X') {
            o = o + 2;
        }
        if (s[1][4]=='X') {
            o = o + 2;
        }
        if (s[1][5]=='X') {
            o = o + 2;
        }
        if (s[1][6]=='X') {
            o = o + 2;
        }
        if (s[1][7]=='X') {
            o = o + 2;
        }
        if (s[1][8]=='X') {
            o = o + 2;
        }
        if (s[8][1]=='X') {
            o = o + 2;
        }
        if (s[8][3]=='X') {
            o = o + 2;
        }
        if (s[8][2]=='X') {
            o = o + 2;
        }
        if (s[8][4]=='X') {
            o = o + 2;
        }
        if (s[8][5]=='X') {
            o = o + 2;
        }
        if (s[8][6]=='X') {
            o = o + 2;
        }
        if (s[8][7]=='X') {
            o = o + 2;
        }
        if (s[8][8]=='X') {
            o = o + 2;
        }
        if (s[2][1]=='X') {
            o = o + 2;
        }
        if (s[3][1]=='X') {
            o = o + 2;
        }
        if (s[4][1]=='X') {
            o = o + 2;
        }
        if (s[5][1]=='X') {
            o = o + 2;
        }
        if (s[6][1]=='X') {
            o = o + 2;
        }
        if (s[7][1]=='X') {
            o = o + 2;
        }
        if (s[2][8]=='X') {
            o = o + 2;
        }
        if (s[3][8]=='X') {
            o = o + 2;
        }
        if (s[4][8]=='X') {
            o = o + 2;
        }
        if (s[5][8]=='X') {
            o = o + 2;
        }
        if (s[6][8]=='X') {
            o = o + 2;
        }
        if (s[7][8]=='X') {
            o = o + 2;
        }

        if (s[0][0]=='X') {
            o = o + 1;
        }
        if (s[0][1]=='X') {
            o = o + 1;
        }
        if (s[0][2]=='X') {
            o = o + 1;
        }
        if (s[0][3]=='X') {
            o = o + 1;
        }
        if (s[0][4]=='X') {
            o = o + 1;
        }
        if (s[0][5]=='X') {
            o = o + 1;
        }
        if (s[0][6]=='X') {
            o = o + 1;
        }
        if (s[0][7]=='X') {
            o = o + 1;
        }
        if (s[0][8]=='X') {
            o = o + 1;
        }
        if (s[0][9]=='X') {
            o = o + 1;
        }
        if (s[9][0]=='X') {
            o = o + 1;
        }
        if (s[9][1]=='X') {
            o = o + 1;
        }
        if (s[9][2]=='X') {
            o = o + 1;
        }
        if (s[9][3]=='X') {
            o = o + 1;
        }
        if (s[9][4]=='X') {
            o = o + 1;
        }
        if (s[9][5]=='X') {
            o = o + 1;
        }
        if (s[9][6]=='X') {
            o = o + 1;
        }
        if (s[9][7]=='X') {
            o = o + 1;
        }
        if (s[9][8]=='X') {
            o = o + 1;
        }
        if (s[9][9]=='X') {
            o = o + 1;
        }
        if (s[1][0]=='X') {
            o = o + 1;
        }
        if (s[2][0]=='X') {
            o = o + 1;
        }
        if (s[3][0]=='X') {
            o = o + 1;
        }
        if (s[4][0]=='X') {
            o = o + 1;
        }
        if (s[5][0]=='X') {
            o = o + 1;
        }
        if (s[6][0]=='X') {
            o = o + 1;
        }
        if (s[7][0]=='X') {
            o = o + 1;
        }
        if (s[8][0]=='X') {
            o = o + 1;
        }
        if (s[1][9]=='X') {
            o = o + 1;
        }
        if (s[2][9]=='X') {
            o = o + 1;
        }
        if (s[3][9]=='X') {
            o = o + 1;
        }
        if (s[4][9]=='X') {
            o = o + 1;
        }
        if (s[5][9]=='X') {
            o = o + 1;
        }
        if (s[6][9]=='X') {
            o = o + 1;
        }
        if (s[7][9]=='X') {
            o = o + 1;
        }
        if (s[8][9]=='X') {
            o = o + 1;
        }

        cout << o << "\n";
    }
        return 0;
}

// BETTER VERSION:

// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// using namespace std;
//
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//
//     int t;
//     cin >> t;
//
//     while (t--) {
//         int total_score = 0;
//
//         for (int i = 0; i < 10; i++) {
//             for (int j = 0; j < 10; j++) {
//                 char cell;
//                 cin >> cell;
//
//                 if (cell == 'X') {
//                     // Find the minimum distance to any of the 4 edges
//                     int distance_to_edge = min({i, 9 - i, j, 9 - j});
//
//                     // The score is the distance + 1
//                     total_score += (distance_to_edge + 1);
//                 }
//             }
//         }
//
//         cout << total_score << "\n";
//     }
//     return 0;
// }