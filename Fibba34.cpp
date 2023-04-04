#include <iostream>

int fib_helper(int a, int b, int n) {
    if (n == 0) {
        return a;
    }
    else {
        return fib_helper(b, a + b, n - 1);
    }
}

int fib(int n) {
    if (n <= 0) {
        return 0;
    }
    else {
        return fib_helper(0, 1, n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter n" << std::endl;
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}