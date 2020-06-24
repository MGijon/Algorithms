""" Unit testing for exercises in Python. """

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
