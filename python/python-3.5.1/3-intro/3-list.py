# for terminal - interactive mode only

# Python knows a number of compound data types, used to group 
# together other values. The most versatile is the list , which can 
# be written as a list of comma-separated values (items) between
# square brackets. Lists might contain items of different types, 
# but usually the items all have the same type.
squares = [1, 4, 9, 16, 25]
squares
# Like strings (and all other built-in sequence type), 
# lists can be indexed and sliced:
squares[0] # indexing returns the item
squares[-1]
squares[-3:] # slicing returns a new list
# All slice operations return a new list containing the requested elements. 
# This means that the following slice returns a new (shallow) copy of the list:
squares[:]
# Lists also support operations like concatenation:
squares + [36, 49, 64, 81, 100]
# Unlike strings, which are immutable , lists are a mutable type, 
# i.e. it is possible to change their content:
cubes = [1, 8, 27, 65, 125] # something's wrong here
4 ** 3 # the cube of 4 is 64, not 65!
cubes[3] = 64 # replace the wrong value
cubes
# You can also add new items at the end of the list, by using the append() method
cubes.append(216) # add the cube of 6
cubes.append(7 ** 3) # and the cube of 7
cubes
# Assignment to slices is also possible, and this can even change 
# the size of the list or clear it entirely:
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g']
letters
# replace some values
letters[2:5] = ['C', 'D', 'E']
letters
# now remove them
letters[2:5] = []
letters
# clear the list by replacing all the elements with an empty list
letters[:] = []
letters
# The built-in function len() also applies to lists:
letters = ['a', 'b', 'c', 'd']
len(letters)
# It is possible to nest lists (create lists containing other lists), for example:
a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]
x
x[0]
x[0][1]
