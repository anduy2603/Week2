#include <iostream>

int findMax(int num1, int num2) {
    // Using a ternary operator to return the larger of the two numbers
    return (num1 > num2) ? num1 : num2;
}

int main() {
    // Example usage of the findMax function
    int a = 10, b = 20;
    std::cout << "The larger of " << a << " and " << b << " is: " << findMax(a, b) << std::endl;

    return 0;
}
