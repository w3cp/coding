# Function annotations are completely optional metadata information
# about the types used by user-defined functions (see PEP 484 for more information).

# Annotations are stored in the __annotations__ attribute of the
# function as a dictionary and have no effect on any other part of the
# function. Parameter annotations are defined by a colon after the
# parameter name, followed by an expression evaluating to the value of
# the annotation. Return annotations are defined by a literal -> ,
# followed by an expression, between the parameter list and the
# colon denoting the end of the def statement. The following example
# has a positional argument, a keyword argument, and
# the return value annotated:

def f(ham: str, eggs: str = 'eggs' ) -> str:
    print("Annotations:", f.__annotations__)
    print("Arguments:", ham, eggs)
    return ham + ' and ' + eggs

f('spam')
