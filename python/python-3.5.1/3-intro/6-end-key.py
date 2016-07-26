# The keyword argument end can be used to avoid the newline after 
# the output, or end the output with a different string:

a, b = 0, 1

while b < 1000:
    print(b, end = ',')
    a, b = b, a + b