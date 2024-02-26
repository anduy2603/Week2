#include <iostream>

int main() {
    int number = 1; // Starting number
    int sum = 0; // Variable to hold the sum

    // Using a while loop to iterate through numbers from 1 to 100
    while (number <= 100) {
        // Checking if the number is even
        if (number % 2 == 0) {
            // Adding the even number to the sum
            sum += number;
        }
        // Incrementing the number
        number++;
    }

    // Printing the sum
    std::cout << "Sum of even numbers between 1 and 100 (inclusive): " << sum << std::endl;

    return 0;
}
