int fibonacci(int n) {
    int a = 0
    int b = 1
    int c = 2
    int d = 3

    if (n < 0) std::cout << "Incorrect input" << std::endl;
    else if (n == 0) return 0;
    else if (n == 1) return b;
    else {
        for (int i = 1; i < n; i++) {
            c = a + b
            a = b
            b = c
        }
        return b
    }
}

int main() {
    std::cout << fibonacci(5) << std::endl;
    return 0;
}