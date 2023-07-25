/*
Author - Given Lepita

Problem Set - Largest Palindromic Product (Difficulty - 5%)

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is $9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/


public class LargestPalindromeProduct {

    public static boolean checkPalindrome(int number) {
        String numStr = Integer.toString(number);
        return numStr.equals(new StringBuilder(numStr).reverse().toString());
    }

    public static int findLargestPalindrome() {
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

    public static void main(String[] args) {
        int result = findLargestPalindrome();
        System.out.println("The largest palindrome made from the product of two 3-digit numbers is: " + result);
    }
}
