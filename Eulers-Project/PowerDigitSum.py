# Author - Given Lepita

def power_digit_sum(base, power):
    # Problem Set - Power Digit Sum(Difficulty - 5%)
    """
    2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
    What is the sum of the digits of the number 2^1000
    """

    # The most algorithmically efficient way to do it is commented below
    # Extract individual digits and add to the added variable
    
    """"
    int_solution = base ** power
    added = 0
    while int_solution > 0:
        added += int_solution % 10
        int_solution //= 10

    return added # (1366)
    """
    
    # But for simplicity's sake - this is the most easiest way to do it 
    int_solution = base ** power
    str_version = str(int_solution)
    added = 0
    for each in range(len(str_version)):
        added += int(str_version[each])
    
    return added # 1366

