#include <iostream>

int main() {
    // Using a for loop to iterate from 1 to 50
    for (int i = 1; i <= 50; i++) {
        // Checking if the number is odd
        if (i % 2 != 0) {
            // Printing the odd number
            std::cout << i << std::endl;
        }
    }

    return 0;
}
