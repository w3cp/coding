t = 12345, 54321, 'hello!'
t[0]
t
# Tuples may be nested:
u = t, (1, 2, 3, 4, 5)
u
# Tuples are immutable:
t[0] = 88888
# but they can contain mutable objects:
v = ([1, 2, 3], [3, 2, 1])
v

empty = ()
singleton = 'hello',    # <-- note trailing comma
len(empty)
len(singleton)
singleton

x, y, z = t

