for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals', x, '*', n // x)
            break
    else:
        # loop fell through without finding a factor
        print(n, 'is a prime number')

# (Yes, this is the correct code. Look closely: the else clause 
# belongs to the for loop, not the if statement.)

# When used with a loop, the else clause has more in common with
# the else clause of a try statement than it does that of if 
# statements: a try statement’s else clause runs when no exception
# occurs, and a loop’s else clause runs when no break occurs.
# For more on the try statement and exceptions, see Handling Exceptions .

