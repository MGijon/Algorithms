""" Unit testing for exercises in Python. """

from ex1 import ex1
from ex2 import ex2
# from ex3 import ex3
# from ex4 import ex4
# from ex5 import ex5
# from ex6 import ex6
# from ex7 import ex7
# from ex8 import ex8
# from ex9 import ex9

ex1 = ex1()
print('\nEXERCISE 1:')
print('===========')
ex1.test()
print('\n')

ex2 = ex2()
print('EXERCISE 2:')
print('===========')
ex2.test()
print('\n')

print('\EXERCISE 3:')
print('===========')

print('\n')

print('EXERCISE 4:')
print('===========')

print('\n')

print('EXERCISE 5:')
print('===========')

print('\n')

print('EXERCISE 6:')
print('===========')

print('\n')

print('EXERCISE 7:')
print('===========')

print('\n')

print('EXERCISE 8:')
print('===========')

print('\n')

print('EXERCISE 9:')
print('===========')

print('\n')


'''
BAD_CODE:
=========
def standard_output(data):
    """
    :data: [number_of_execise, function]
    """
    print('===== ==== ==== ====')
    print('Exercise number ' + str(data[0]))
    data[1]()
    print('===== ==== ==== ====')


def test():
    print('funciona!!')

standard_output([1, test])
'''
