# The reverse situation occurs when the arguments are already in a list
# or tuple but need to be unpacked for a function call requiring
# separate positional arguments. For instance, the built-in range()
# function expects separate start and stop arguments. If they are not
# available separately, write the function call with the * -operator
# to unpack the arguments out of a list or tuple:

list(range(3, 6)) # normal call with separate arguments

args = [3, 6]
list(range(*args)) # call with arguments unpacked from a list

# In the same fashion, dictionaries can deliver keyword arguments
# with the ** -operator:

def parrot(voltage, state = 'a stiff', action = 'voom'):
    print("-- This parrot wouldn't", action, end = ' ')
    print("if you put", voltage, "volts through it.", end = ' ')
    print("It's", state, "!")

d = {"voltage" : "four million", \
                "state" : "bleedin' demised", "action" : "VOOM"}

parrot(**d)

