#include <iostream>
//a power functoin
long long power(long long base, long long exponent) {
    if (exponent == 0) {
        return 0;
    }

    long long result = base;
    for (int i = 1; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
//summation of the powers as demonstrated in the equation
long long equationResult(long long X, long long N) {
    long long result = 0;
    for (int i = 0; i <= N; i += 2) {
        result += power(X, i);
    }
    return result;
}

int main() {
    long long X, N;
    std::cin >> X >> N;

    long long S = equationResult(X, N);
    std::cout << S << std::endl;

    return 0;
}