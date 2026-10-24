#include <iostream>

int main(){
    int i,j,n,a,k;
    k = n-2;
    std::cin >> n;
    a = 2*n-1;
    for(i=0;i<a;i++){
        for (j=0;j<i;j++) {
            if (i >= n) {
                break;
            }
            std::cout << n-j;
        }
        for (j=0;j<a-2*i;j++) {
            std::cout << n-i;
        }
        for (j=0;j<i;j++) {
            k--;
            if (i >= n) {
                break;
            }
            std::cout << n-k;
        }
        std::cout <<  "\n";
    }
}