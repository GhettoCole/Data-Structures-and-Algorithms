#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Author - Given Lepita

// Problem Set - Power Digit Sum(Difficulty - 5%)

/**
 * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 2^1000.
 */

/**
 * Custom multiplication function to perform multiplication of a BigInt-like vector with a single-digit integer.
 *
 * @param a: A vector of integers representing a BigInt-like number in reverse order (least significant digit at index 0).
 * @param b: An integer representing a single-digit number to be multiplied with the BigInt-like number.
 *
 * @return A vector of integers representing the result of the multiplication in reverse order.
 *         The vector contains the digits of the product, with the least significant digit at index 0.
 */
std::vector<int> multiply(std::vector<int> a, int b) {
    int carry = 0;
    std::vector<int> result;

    // Perform multiplication for each digit in the BigInt-like number (a) - similar to JS's way.
    for (int i = a.size() - 1; i >= 0; i--) {
        int prod = a[i] * b + carry; // Multiply the digit with the single-digit number and add any carry from the previous iteration.
        result.push_back(prod % 10); // Store the least significant digit of the product in the result vector.
        carry = prod / 10; // Update the carry for the next iteration.
    }

    // After multiplying with the single-digit number, there may still be a carry left.
    // Add any remaining carry to the result vector.
    while (carry > 0) {
        result.push_back(carry % 10); // Store the least significant digit of the carry in the result vector.
        carry /= 10; // Update the carry for the next iteration.
    }

    // Reverse the result vector to restore the correct order of digits (least significant digit at index 0).
    std::reverse(result.begin(), result.end());

    return result;
}


vector<int> powerDigitSum(int base, int power) {
    vector<int> result;
    result.push_back(1);
    for (int i = 0; i < power; i++) {
        result = multiply(result, base);
    }
    return result;
}

int main() {
    vector<int> result = powerDigitSum(2, 1000);
    int sum = 0;
    for (int digit : result) {
        sum += digit;
    }
    cout << sum << endl;
    return 0;
}
