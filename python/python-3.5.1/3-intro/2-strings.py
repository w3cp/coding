# for terminal - interactive mode only
'spam eggs' # single quotes
'doesn\'t' # use \' to escape the single quote...
"doesn't" # ...or use double quotes instead
'"Yes," he said.'
"\"Yes,\" he said."
'"Isn\'t," she said.'
'"Isn\'t," she said.'
print('"Isn\'t," she said.')
s = 'First line.\nSecond line.' # \n means newline
s # without print(), \n is included in the output
print(s) # with print(), \n produces a new line
print('C:\some\name') # here \n means newline!
# If you don’t want characters prefaced by \ to be
# interpreted as special characters, you can use raw
# strings by adding an r before the first quote
print(r'C:\some\name') # note the r before the quote
# String literals can span multiple lines. One way is using 
# triple-quotes: """...""" or '''...''' . End of lines are 
# automatically included in the string, but it’s possible to 
# prevent this by adding a \ at the end of the line. 
# The following example produces the following output 
# (note that the initial newline is not included)
print("""\
Usage: thingy [OPTIONS]
     -h                        Display this usage message
     -H hostname               Hostname to connect to
""")
# 3 times 'un', followed by 'ium'
3 * 'un' + 'ium'
'Py' 'thon'
# This only works with two literals though, 
# not with variables or expressions
prefix = 'Py'
prefix 'thon' # can't concatenate a variable and a string literal
('un' * 3) 'ium'
# If you want to concatenate variables or a variable and a literal, use + 
prefix + 'thon'
# This feature is particularly useful when you want to break long strings
text = ('Put several strings within parentheses '
        'to have them joined together.')
text
# Strings can be indexed (subscripted), with the first character 
# having index 0. There is no separate character type; 
# a character is simply a string of size one:
word = 'Python'
word[0] # character in position 0
word[5] # character in position 5
# Indices may also be negative numbers, to start counting from the right:
word[-1] # last character
word[-2] # second-last character
word[-6]
# Note that since -0 is the same as 0, negative indices start from -1.
# In addition to indexing, slicing is also supported. 
# While indexing is used to obtain individual characters, 
# slicing allows you to obtain substring:
word[0:2] # characters from position 0 (included) to 2 (excluded)
word[2:5] # characters from position 2 (included) to 5 (excluded)
# Note how the start is always included, and the end always excluded.
# This makes sure that s[:i] + s[i:] is always equal to s :
word[:2] + word[2:]
word[:4] + word[4:]
# Slice indices have useful defaults; an omitted first index defaults 
#to zero, an omitted second index defaults to the size of the string being sliced.
word[:2] # character from the beginning to position 2 (excluded)
word[4:] # characters from position 4 (included) to the end
word[-2:] # characters from the second-last (included) to the end
# the length of word[1:3] is 2.
# Attempting to use an index that is too large will result in an error:
word[42] # the word only has 6 characters
# However, out of range slice indexes are handled 
# gracefully when used for slicing:
word[4:42]
word[42:]
# Python strings cannot be changed — they are immutable.
# Therefore, assigning to an indexedposition in the string results
# in an error:
word[0] = 'J'
word[2:] = 'py'
# If you need a different string, you should create a new one:
'J' + word[1:]
word[:2] + 'py'
# The built-in function len() returns the length of a string:
s = 'supercalifragilisticexpialidocious'
len(s)
