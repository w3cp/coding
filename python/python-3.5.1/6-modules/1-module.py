# fibo.py on 'x' dir
# cd to 'x' dir first
# ctrl+z OR exit() OR exit(1) 
# cd /*/x/
# python

import fibo

fibo.fib(1000)
fibo.fib2(100)
fibo.__name__

fib = fibo.fib
fib(500)

from fibo import fib, fib2
fib(500)

from fibo import *
fib(500)
