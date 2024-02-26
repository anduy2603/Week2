#include <iostream>

int main() {
    int number; // Variable to store the number entered by the user
    int sum = 0; // Variable to store the sum of numbers entered
    int count = 0; // Variable to store the count of numbers entered (excluding 0)

    // Using a do-while loop to read numbers from the user
    do {
        std::cout << "Enter a number (enter 0 to stop): ";
        std::cin >> number;

        // Adding the number to the sum if it's not 0
        if (number != 0) {
            sum += number;
            count++;
        }
    } while (number != 0);

    // Calculating the average
    double average = (count != 0) ? static_cast<double>(sum) / count : 0;

    // Printing the average
    std::cout << "Average of the numbers entered: " << average << std::endl;

    return 0;
}
