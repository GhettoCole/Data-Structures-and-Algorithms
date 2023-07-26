# Author - Given Lepita

"""
Problem Set - Summation Of Primes(Difficulty - 5%)

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
"""


def sum_of_primes_below(limit: int) -> int:

    def check_prime(number: int) -> bool:
        if number < 2:
            return False
        for i in range(2, int(number**0.5) + 1):
            if number % i == 0:
                return False
        return True
    
    summed_prime = 0
    for number in range(2, limit):
        if check_prime(number):
            summed_prime += number
    return summed_prime

print("The sum of all the primes below", 2000000, "is:", sum_of_primes_below(2000000))
