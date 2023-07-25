"""
Author - Given Lepita

Problem Set - Largest Palindromic Product (Difficulty - 5%)

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is $9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
"""

def find_largest_palindrome():

    def check_palindrome(number: int) -> bool:
        # simple enough
        return str(number) == str(number)[::-1]

    largest_palindrome = 0
    # Start at 100 and end at 999 - which is 3 digit.
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j # product of all 3-digit numbers
            
            # We want the largest so we keep checking until the loop is finished.
            if check_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
    
    return largest_palindrome
# Call the function to find the largest palindrome
print(f"The largest palindrome made from the product of two 3-digit numbers is:{find_largest_palindrome()}")
