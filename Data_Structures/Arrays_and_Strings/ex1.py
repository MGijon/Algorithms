"""
IS_UNIQUE:
==========
Implement an algorithm to determine if a string has all unique characteres.
What if you cannot use additional data structures?
"""
import time
import unittest

class ex1():
    """
    """
    def __init__(self):
        self.question = "Implement an algorithm to determine if a string has all unique characteres.\n What if you cannot use additional data structures?"
        self.notes = "- SOLUTION 1: \n"

    def solution_1(self, input_string):
        """
        TODO: reescribir solucion.
        This solution uses internal python fucntions.
        :param self:
        :param input_string:
        :return: Boolean. TODO: ACABAR
        """

        input_set = set(input_string)
        unique_chars = False
        if len(input_string) == len(input_set):
            unique_chars = True
        return unique_chars

    def solution_2(self, input_string):
        """
        Suppose the codification is ASCII.
        :param self:
        :param input_string:
        """

        if len(input_string) > 128:
            return False

        char_list = [False for _ in range(128)]
        for char in input_string:
            value = ord(char)
            if char_list[value]:
                return False
            char_list[value] = True

        return True

    '''
    def solution_3(self, input_string):
        """
        :param self:
        :param input_string:
        """

        return 0
    '''
    def test(self):
        """
        Testing functions. Test every solution and print times and accuracy.
        """

        test_elements = {
            'Lorem Impsum': False,          # 'm' repeated
            'Linus Torvalds': False,        # 's' repeated
            'abcdefghijklmnopqrstvwxyz': True,
        }

        print('Solution 1:')
        counter = 0
        trues = 0
        start = time.time()
        for sample in test_elements:
            true_value = test_elements[sample]
            predicted_value = self.solution_1(input_string=sample)

            if predicted_value == true_value:
                #print('ok')
                #pass
                trues+=1
            counter+=1

        end = time.time()
        print()

        print('\t- Total tested cases: {}'.format(counter))
        if counter==trues:
            print('\t- Works fine in all tested cases.')
        print('\t- Elapsed time {}\n'.format(end - start))
            #print(sample, ' - True Value: ', true_value, ' - Predicted:', predicted_value)

        print('Solution 2:')
        counter = 0
        trues = 0
        start = time.time()
        for sample in test_elements:
            true_value = test_elements[sample]
            predicted_value = self.solution_2(input_string=sample)

            if predicted_value == true_value:
                trues += 1
            counter +=1

        end = time.time()
        print()

        print('\t- Total tested cases: {}'.format(counter))
        if counter==trues:
            print('\t- Works fine in all tested cases.')
        print('\t- Elapsed time {}\n'.format(end - start))

        '''
        print('Solution 3:')
        counter = 0
        trues = 0
        start = time.time()
        for sample in test_elements:
            true_value = test_elements[sample]
            predicted_value = self.solution_3(input_string=sample)

            if predicted_value == true_value:
                trues += 1
            counter +=1

        end = time.time()
        print()

        print('\t- Total tested cases: {}'.format(counter))
        if counter==trues:
            print('\t- Works fine in all tested cases.')
        print('\t- Elapsed time {}\n'.format(end - start))
        '''







'''
BAD_CODE:
=========
if len(input_string) > 128:
    output_value = False

list_characters = [x for x in input_string]

return list_characters
'''
