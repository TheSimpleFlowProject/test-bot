```
// The fibonacci function calculates the nth Fibonacci number
// It takes an integer n as input and returns the nth Fibonacci number
int fibonacci(int n) {
    // Initialize variables a, b, c to store Fibonacci numbers
    int a = 0;
    int b = 1; 
    int c = 2;
    int d = 3;

    // Check if the input n is negative, and print an error message if so
    if (n < 0) std::cout << "Incorrect input" << std::endl;
    // If n is 0, return 0 (the first Fibonacci number)
    else if (n == 0) return 0;
    // If n is 1, return 1 (the second Fibonacci number)
    else if (n == 1) return b;
    // Otherwise, calculate the nth Fibonacci number iteratively
    else {
        // Iterate from 1 to n-1
        for (int i = 1; i < n; i++) {
            // Update the values of a, b, and c to represent the next Fibonacci numbers
            c = a + b;
            a = b;
            b = c;
        }
        // Return the nth Fibonacci number (stored in b)
        return b;
    }
}

// The main function demonstrates the use of the fibonacci function
int main() {
    // Call the fibonacci function with input 5 and print the result
    std::cout << fibonacci(5) << std::endl;
    // Return 0 to indicate successful program execution
    return 0;
}
```