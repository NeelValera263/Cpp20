// 1/10/2026 12:30-13:00 1

#include <iostream>

int main() {
    int w;
    std::cin >> w;
    if (w % 2 == 0 && w != 2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}

/*### 1. The Ternary Operator (Competitive Programming Style)

Competitive programmers often compress simple `if-else` blocks into a single line using the ternary conditional operator (`? :`). It evaluates the condition and directly returns one of the two string literals to the standard output stream. This keeps the logic tightly contained and speeds up typing during contests.

```cpp
#include <iostream>

int main() {
    int w;
    std::cin >> w;

    std::cout << (w % 2 == 0 && w > 2 ? "YES\n" : "NO\n");

    return 0;
}

```

### 2. Bitwise AND (Low-Level Optimization)

Instead of using the mathematical modulo operator (`%`), you can check if a number is even by inspecting its binary representation in memory. In binary, every even number ends in `0`, and every odd number ends in `1`. The bitwise AND operator (`&`) compares the last bit of `w` against `1`. `(w & 1) == 0` is a classic C++ micro-optimization used in high-performance computing to check parity.

```cpp
#include <iostream>

int main() {
    int w;
    std::cin >> w;

    if ((w & 1) == 0 && w > 2) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}

```

### 3. Brute-Force Search (Algorithmic Approach)

Instead of relying on a mathematical shortcut, you can instruct the computer to simulate the problem exactly as described: by iterating through every possible way to cut the watermelon and checking if a valid state exists. While overkill for an arithmetic problem, generating and testing possible states using a `for` loop is a foundational technique for harder algorithmic challenges.

```cpp
#include <iostream>

int main() {
    int w;
    std::cin >> w;

    bool can_divide = false;

    // Try cutting off an even piece 'i', starting from 2
    for (int i = 2; i <= w / 2; i += 2) {
        int second_piece = w - i;

        // If the remaining piece is also positive and even, it's a success
        if (second_piece > 0 && second_piece % 2 == 0) {
            can_divide = true;
            break;
        }
    }

    if (can_divide) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
--------------------------------------------------------------------------------------
Fastest == Bitwise AND
--------------------------------------------------------------------------------------
why : If we strip away compiler optimizations and look strictly at the raw instructions you are feeding the processor, here is exactly why it wins:

1. Bitwise vs. The Original & Ternary (The Math)
Both your original code and the Ternary solution use the modulo operator (w % 2). To execute a modulo, the CPU must perform division, calculate the quotient, subtract, and find the remainder. This is a heavy hardware operation that takes approximately 15 to 40 clock cycles.

The Bitwise code (w & 1) looks directly at the physical memory register and checks if the final transistor is set to 1 or 0. This requires zero math. It is a fundamental hardware instruction that completes in exactly 1 clock cycle. While a good compiler will try to optimize modulo into bitwise automatically, writing it in bitwise guarantees peak hardware speed natively.

2. Bitwise vs. Ternary (The Branching)
The Ternary solution looks shorter to type, but it is purely syntactic sugar. Under the hood, a ternary operator compiles into the exact same conditional branching instructions as standard if-else blocks. It does not make the code run faster than the Bitwise if-else structure.

3. Bitwise vs. Brute-Force (The Algorithm)
The Brute-Force solution is mathematically disqualified. It uses a loop that forces the CPU to execute instructions repeatedly based on the size of the watermelon (O(N) time), whereas the Bitwise solution finishes in a single, instantaneous step (O(1) time) regardless of the input size.

```*/