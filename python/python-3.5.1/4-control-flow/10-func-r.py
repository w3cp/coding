# interactive mode

def fib2(n): # return Fibonacci series up to n
    """Return a list containing the Fibonacci series up to n."""
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a) # see below
        a, b = b, a + b
    return result

f100 = fib2(100) # call it
f100 # write the result
