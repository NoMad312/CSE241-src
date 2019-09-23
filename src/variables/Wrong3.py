#!/usr/bin/python3

import sys

def foo(x):
    print('Hi!\n')
    print('I am ' + x)

if __name__ == "__main__" :
    if sys.argv[1] == 'trigger':
        foo(3)
    else:
        foo(sys.argv[1])
