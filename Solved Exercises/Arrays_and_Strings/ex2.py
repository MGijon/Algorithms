"""
CHECK_PERMUTATION:
==================
Given two strings, write a method to decide is one is a permutation of the other.
"""
import time
from collections import Counter   # just to make it simplier

class ex2():
    """
    """
    def __init__(self):
        self.question="Given two strings, write a method to decide is one is a permutation of the other."
        self.notes="ASSUMPTIONS: "

    def solution_1(self, str1, str2):
        """
        :param self:
        :param str1: input string 1.
        :param str2: input string 2.
        """
        # observe that if the length is different one can not be a permutation of the another one
        if len(str1) != len(str2):
            return False
        else:
            counter = Counter()
            for c in str1:
                counter[c] += 1
            for c in str2:
                if counter[c] == 0:
                    return False
                counter[c] -= 1
            return True

    
    def test(self):
        """Testing solutions."""

        test_elements = [ 
            ('dog', 'god', True), 
            ('else', 'sel', False),
            ('pera', 'rape', True),
            ('huesca', 'huesco', False),
        ]

        print('Solution 1:')
        start = time.time()

        counter = 0
        trues = 0
        start = time.time()
        for sample in test_elements:
            true_value = sample[2]
            predicted_value = self.solution_1(str1=sample[0], str2=sample[1])
            if predicted_value == true_value:
                trues += 1
            counter += 1
        end = time.time()
        print('\t- Total tested cases: {}'.format(counter))
        if counter==trues:
            print('\t- Works fine in all tested cases.')

        print('\t- Elapsed time {}\n'.format(end - start))



        return 0


    def __str__(self):
        return self.question
