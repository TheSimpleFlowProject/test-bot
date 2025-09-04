def fibonacci(n):
    a = 0
    b = 1
    c = 2
    
    # Check if n is less than 0
    if n < 0:
        print("Incorrect input")
        
    # Check if n is equal to 0
    elif n == 0:
        return 0
      
    # Check if n is equal to 1
    elif n == 1:
        return b
    else:
        for i in range(1, n):
            c = a + b
            a = b
            b = c
        return b

def print_hello_and_return_2():
    print("Hello")
    return 2

def print_hello_and_return_3():
    print("Hello")
    return 3

def main():
    print("Hello World")

if __name__ == '__main__':
    main()