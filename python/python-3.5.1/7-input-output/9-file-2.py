# my-file-2.txt file on x dir
# cd to x derectory first

f = open('my-file-2.txt', 'w')

f.write('This is a test\n')

value = ('the answer', 42)
s = str(value)  # convert the tuple to string
f.write(s)

