```
# The 'fibonacci' function calculates the nth Fibonacci number.
# Fibonacci numbers are a sequence where each number is the sum of the two preceding ones, typically starting with 0 and 1.
# This function takes an integer 'n' as input and returns the nth Fibonacci number.
def fibonacci(n):
    a = 0  # Initialize the first Fibonacci number to 0
    b = 1  # Initialize the second Fibonacci number to 1
    
    # Check if the input 'n' is less than 0, which is an invalid input
    if n < 0:
        print("Incorrect input")
        
    # Check if the input 'n' is equal to 0, in which case the function should return 0
    elif n == 0:
        return 0
      
    # Check if the input 'n' is equal to 1, in which case the function should return 1
    elif n == 1:
        return b
    else:
        # Iterate through the Fibonacci sequence up to the nth number
        for i in range(1, n):
            c = a + b  # Calculate the next Fibonacci number
            a = b     # Update the first two Fibonacci numbers
            b = c
        return b  # Return the nth Fibonacci number

# The 'print_hello_and_return_2' function prints "Hello" and returns the integer 2.
def print_hello_and_return_2():
    print("Hello")
    return 2

# The 'print_hello_and_return_3' function prints "Hello" and returns the integer 3.
def print_hello_and_return_3():
    print("Hello")
    return 3

# The 'main' function is the entry point of the program.
# It simply prints "Hello World".
def main():
    print("Hello World")

# This block ensures that the 'main' function is executed when the script is run directly (not imported as a module).
if __name__ == '__main__':
    main()
```