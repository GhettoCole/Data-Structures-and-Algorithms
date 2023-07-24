# Author - Given Lepita

def power_digit_sum(base, power):
    # Problem Set - Power Digit Sum(Difficulty - 5%)
    """
    2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
    What is the sum of the digits of the number 2^1000
    """
    int_solution = base ** power
    str_version = str(int_solution)
    added = 0
    for each in range(len(str_version)):
        added += int(str_version[each])
    
    return added

print(power_digit_sum(2, 1000))
