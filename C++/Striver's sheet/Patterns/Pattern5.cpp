#include <iostream>

int main() {
    int j,n;
    std::cout << "Enter a number : ";
    std::cin >> n;
    while(n--){
        for(j=0;j<=n;j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}