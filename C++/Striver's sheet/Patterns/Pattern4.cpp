#include <iostream>

int main() {
    int i,j,n;
    std::cout << "Enter a number : ";
    std::cin >> n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            std::cout << i;
        }
        std::cout << "\n";
    }
    return 0;
}