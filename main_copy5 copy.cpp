int fibonacci(int n) {
    // This function calculates the nth Fibonacci number.
    // The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
    // The sequence starts with 0 and 1, and the next numbers are 1, 2, 3, 5, 8, 13, 21, and so on.

    int a = 0; // Initialize the first Fibonacci number to 0.
    int b = 1; // Initialize the second Fibonacci number to 1.
    int c = 2; // Initialize a temporary variable to store the next Fibonacci number.

    // Check the input value 'n' and handle the edge cases.
    if (n < 0) std::cout << "Incorrect input" << std::endl; // If 'n' is negative, print an error message.
    else if (n == 0) return 0; // If 'n' is 0, return 0 (the first Fibonacci number).
    else if (n == 1) return b; // If 'n' is 1, return 1 (the second Fibonacci number).
    else {
        // Calculate the nth Fibonacci number.
        for (int i = 1; i < n; i++) {
            c = a + b; // Calculate the next Fibonacci number by adding the previous two numbers.
            a = b; // Update 'a' to the previous Fibonacci number.
            b = c; // Update 'b' to the current Fibonacci number.
        }
        return b; // Return the nth Fibonacci number.
    }
}

int main() {
    // This is the main function that calls the 'fibonacci' function and prints the result.
    std::cout << fibonacci(5) << std::endl; // Call the 'fibonacci' function with n = 5 and print the result.
    return 0;
}