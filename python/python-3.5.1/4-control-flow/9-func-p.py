# interactive mode

def fib(n): # write Fibonacci series up to n
    """Print a Fibonacci series up to n."""
    a, b = 0, 1
    while a < n:
        print(a, end =' ')
        a, b = b, a + b
    print()

# Now call the function we just defined:
fib(2000)

# A function definition introduces the function name in the current 
# symbol table. The value of the function name has a type that
# is recognized by the interpreter as a user-defined function.
# This value can be assigned to another name which can then also be 
# used as a function. This serves as a general renaming mechanism:

fib
f = fib
f(100)

# Coming from other languages, you might object that fib is not a 
# function but a procedure since it doesn’t return a value.
# In fact, even functions without a return statement do return a value, 
# albeit a rather boring one. This value is called None (it’s a built-in name). 
# Writing the value None is normally suppressed by the interpreter
# if it would be the only value written. You can see it if 
# you really want to using print() :

fib(0)
print(fib(0))

