basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print(basket)       # show that duplicates have been removed
'orange' in basket  # fast membership testing
'crabgrass' in basket

# Demonstrate set operations on unique letters from two words

a = set('abracadabra')
b = set('alacazam')
a                                  # unique letters in a
a - b                              # letters in a but not in b
a | b                              # letters in either a or b
a & b                              # letters in both a and b
a ^ b                              # letters in a or b but not both
a = {x for x in 'abracadabra' if x not in 'abc'}
a
