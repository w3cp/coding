# The pass statement does nothing. It can be used when a statement is 
# required syntactically but the program requires no action. For example:

while True:
    pass # Busy-wait for keyboard interrupt (Ctrl+C)

# This is commonly used for creating minimal classes:

class MyEmptyClass:
    pass

# Another place pass can be used is as a place-holder for a function 
# or conditional body when you are working on new code, allowing you 
# to keep thinking at a more abstract level. The pass is silently ignored:

def initlog(*args):
    pass # Remember to implement this!
