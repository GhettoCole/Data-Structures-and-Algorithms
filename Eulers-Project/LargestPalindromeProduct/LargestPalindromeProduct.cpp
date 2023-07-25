#include <iostream>
#include <string>
#include <algorithm>
/*
Author - Given Lepita

Problem Set - Largest Palindromic Product (Difficulty - 5%)

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is $9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool checkPalindrome(int number) {
    std::string numStr = std::to_string(number);
    return numStr == std::string(numStr.rbegin(), numStr.rend());
}

int findLargestPalindrome() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;

            if (checkPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}

int main() {
    int result = findLargestPalindrome();
    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << result << std::endl;
    return 0;
}
