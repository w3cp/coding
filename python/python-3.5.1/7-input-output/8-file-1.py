# my-file.txt file on x dir
# cd to x derectory first

f = open('my-file.txt', 'r')

f.read()
f.read()

f = open('my-file.txt', 'r')

f.readline()
f.readline()

f = open('my-file.txt', 'r')

# For reading lines from a file, you can loop over the file object.
# This is memory efficient, fast, and leads to simple code:

for line in f:
    print(line, end='')

