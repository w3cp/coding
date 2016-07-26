import reprlib
reprlib.repr(set('supercalifragilisticexpialidocious'))


import pprint
t = [[[['black', 'cyan'], 'white', ['green', 'red']], [['magenta',
     'yellow'], 'blue']]]

pprint.pprint(t, width=30)


import textwrap
doc = """The wrap() method is just like fill() except that it returns
a list of strings instead of one big string with newlines to separate
the wrapped lines."""

print(textwrap.fill(doc, width=40))


import locale
locale.setlocale(locale.LC_ALL, 'English_United States.1252')
conv = locale.localeconv()          # get a mapping of conventions
x = 1234567.8
locale.format("%d", x, grouping=True)
locale.format_string("%s%.*f", (conv['currency_symbol'],
                     conv['frac_digits'], x), grouping=True)

