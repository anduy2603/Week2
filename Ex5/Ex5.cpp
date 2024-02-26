#include <iostream>

unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        std::cerr << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 1; // Return error code
    }

    unsigned long long result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;

    return 0;
}
