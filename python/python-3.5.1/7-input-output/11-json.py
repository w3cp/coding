#
import json
json.dumps([1, 'simple', 'list'])

# Another variant of the dumps() function, called dump(),
# simply serializes the object to a text file. So if f is a text file
# object opened for writing, we can do this:

# json.dump(x, f)

# To decode the object again, if f is a text file object which has
# been opened for reading:

# x = json.load(f)

