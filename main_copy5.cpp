int fibonacci(int n) {
    // This function calculates the nth Fibonacci number by recursively
    // computing the sequence. The Fibonacci sequence is a series of
    // numbers where each number is the sum of the two preceding ones,
    // usually starting with 0 and 1.
    
    int a = 0; // Initialize the first Fibonacci number to 0
    int b = 1; // Initialize the second Fibonacci number to 1
    int c = 2; // Variable to store the next Fibonacci number
    int d = 3; // Variable not used in the function

    // Check if the input n is negative, and if so, print an error message
    if (n < 0) std::cout << "Incorrect input" << std::endl;
    // If n is 0, return 0 as the first Fibonacci number
    else if (n == 0) return 0;
    // If n is 1, return 1 as the second Fibonacci number
    else if (n == 1) return b;
    else {
        // Iterate through the Fibonacci sequence up to the nth number
        for (int i = 1; i < n; i++) {
            c = a + b; // Compute the next Fibonacci number
            a = b; // Update the first Fibonacci number
            b = c; // Update the second Fibonacci number
        }
        return b; // Return the nth Fibonacci number
    }
}

int main() {
    // This is the main function that calls the fibonacci() function
    // and prints the 5th Fibonacci number to the console.
    std::cout << fibonacci(5) << std::endl;
    return 0;
}