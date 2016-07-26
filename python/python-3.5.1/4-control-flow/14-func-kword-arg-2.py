# When a final formal parameter of the form **name is present,
# it receives a dictionary (see Mapping Types — dict) containing all
# keyword arguments except for those corresponding to a formal parameter.
# This may be combined with a formal parameter of the form *name
# (described in the next subsection) which receives a tuple containing
# the positional arguments beyond the formal parameter list.
# ( *name must occur before **name .)
# For example, if we define a function like this:

def cheeseshop(kind, *arguments, **keywords):
    print("-- Do you have any", kind, "?")
    print("-- I'm sorry, we're all out of", kind)
    for arg in arguments:
        print(arg)
    print("-" * 40)
    keys = sorted(keywords.keys())
    for kw in keys:
        print(kw, ":", keywords[kw])

# It could be called like this:

cheeseshop("Limburger" , "It's very runny, sir.",
           "It's really very, VERY runny, sir.",
           shopkeeper = "Michael Palin" ,
           client = "John Cleese",
           sketch = "Cheese Shop Sketch")

# Note that the list of keyword argument names is created by sorting the
# result of the keywords dictionary’s keys() method before printing its
# contents; if this is not done, the order in which the
# arguments are printed is undefined.

