#include <iostream>
#include <algorithm>
#include <string.h>

// Function to convert a character to its decimal value
long long charToDecimal(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else {
        return c - 'A' + 10;
    }
}

// Function to convert a decimal value to its corresponding character
char decimalToChar(long long num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    } else {
        return num + 'A' - 10;
    }
}

// Function to convert a number from base X to decimal
long long convertToDecimal(char* value, long long base) {
    long long size = strlen(value);
    long long power = 1;
    long long result = 0;

    for (int i = size - 1; i >= 0; i--) {
        result += charToDecimal(value[i]) * power;
        power *= base;
    }

    return result;
}

// Function to convert a decimal number to base X
char* convertFromDecimal(char res[], long long base, long long number) {
    int index = 0;

    while (number > 0) {
        res[index++] = decimalToChar(number % base);
        number /= base;
    }

    res[index] = '\0';
    std:: reverse(res, res + index);

    return res;
}

int main() {
    int conversionType;
    std:: cin >> conversionType;

    if (conversionType == 1) {
        char arr[35] = {""};
        std::cin >> arr;
        long long base;
        std::cin >> base;
        std::cout << convertToDecimal(arr, base);
    } else {
        long long number, base;
        std::cin >> number >> base;
        char res[100];
        std::cout << convertFromDecimal(res, base, number);
    }

    return 0;
}
