# Small anonymous functions can be created with the lambda keyword.
# This function returns the sum of its two arguments: lambda a, b: a + b .
# Lambda functions can be used wherever function objects are required.
# They are syntactically restricted to a single expression.
# Semantically, they are just syntactic sugar for a normal function
# definition. Like nested function definitions, lambda functions can
# reference variables from the containing scope:

def make_incrementor(n):
    return lambda x: x + n

f = make_incrementor(42)
f(0)
f(1)

# The above example uses a lambda expression to return a function.
# Another use is to pass a small function as an argument:

pairs = [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]
pairs.sort(key = lambda pair: pair[1])
pairs

