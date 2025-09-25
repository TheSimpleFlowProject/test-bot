```cpp
// The fibonacci() function calculates the nth Fibonacci number.
// The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
// The function takes an integer n as input and returns the nth Fibonacci number.
int fibonacci(int n) {
    // Initialize the first three Fibonacci numbers
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;

    // Handle negative input by printing an error message
    if (n < 0) {
        std::cout << "Incorrect input" << std::endl;
    }
    // Handle the base cases of n = 0 and n = 1
    else if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return b;
    }
    // Calculate the nth Fibonacci number using a loop
    else {
        for (int i = 1; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

// The main() function is the entry point of the program.
// It calls the fibonacci() function with an input of 5 and prints the result to the console.
int main() {
    std::cout << fibonacci(5) << std::endl;
    return 0;
}
```