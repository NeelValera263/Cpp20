#include <iostream>
#include <string>

int main() {
    std::string text = "Codeforces";
    std::cout << text[0] << "\n";       // Outputs: C (Standard and fastest)
    std::cout << text.front() << "\n";  // Outputs: C (More readable alternative)
    return 0;
}