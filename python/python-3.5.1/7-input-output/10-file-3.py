#

f = open('workfile.txt', 'rb+')
f.write(b'0123456789abcdef')
f.seek(5)     # Go to the 6th byte in the file
f.read(1)
f.seek(-3, 2) # Go to the 3rd byte before the end
f.read(1)


f.close()
f.read()

with open('workfile.txt', 'r') as f:
    read_data = f.read()

f.closed

