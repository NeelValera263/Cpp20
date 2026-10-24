#include <iostream>

int main() {
    int i,n;
    std::cout << "Enter a number : ";
    std::cin >> n;
    while(n--){
        for(i=1;i<=n+1;i++){
            std::cout << i;
        }
        std::cout << "\n";
    }
    return 0;
}