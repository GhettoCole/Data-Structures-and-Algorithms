/*
Author - Given Lepita

Problem Set - Largest Palindromic Product (Difficulty - 5%)

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is $9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

function checkPalindrome(number) {
    // Simple enough
    return String(number) === String(number).split('').reverse().join('');
  }
  
  function findLargestPalindrome() {
    let largestPalindrome = 0;
    // Run from 100 to 999 
    for (let i = 100; i < 1000; i++) {
      for (let j = 100; j < 1000; j++) {
        const product = i * j; // Obvious
        // keep changing the largestPalindrome variable until we are done with the loop
        if (checkPalindrome(product) && product > largestPalindrome) {
          largestPalindrome = product;
        }
      }
    }
    
    return largestPalindrome;
  }
  
  // Call the function to find the largest palindrome
  console.log("The largest palindrome made from the product of two 3-digit numbers is: " + findLargestPalindrome());
  