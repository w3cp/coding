# interactive mode

squares = []
for x in range(10):
    squares.append(x**2)

squares

squares = list(map(lambda x: x**2, range(10)))

squares = [x**2 for x in range(10)]

[(x, y) for x in [1,2,3] for y in [3,1,4] if x != y]

combs = []
for x in [1,2,3]:
    for y in [3,1,4]:
        if x != y:
            combs.append((x, y))

combs

vec = [-4, -2, 0, 2, 4]
# create a new list with the values doubled
[x*2 for x in vec]
# filter the list to exclude negative numbers
[x for x in vec if x >= 0]
# apply a function to all the elements
[abs(x) for x in vec]
# call a method on each element
freshfruit = ['  banana', '  loganberry ', 'passion fruit  ']
[weapon.strip() for weapon in freshfruit]
# create a list of 2-tuples like (number, square)
[(x, x**2) for x in range(6)]
# the tuple must be parenthesized, otherwise an error is raised
[x, x**2 for x in range(6)]
# flatten a list using a listcomp with two 'for'
vec = [[1,2,3], [4,5,6], [7,8,9]]
[num for elem in vec for num in elem]

from math import pi
[str(round(pi, i)) for i in range(1, 6)]
