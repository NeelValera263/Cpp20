#include <iostream>

int main() {
    int i,j,n;
    std::cout << "Enter a number : ";
    std::cin >> n;
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            std::cout << j;
        }
        std::cout << "\n";
    }
    return 0;
}