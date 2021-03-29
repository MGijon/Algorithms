"""
IS_UNIQUE:
==========
Implement an algorithm to determine if a string has all unique characteres.
What if you cannot use additional data structures?
"""
import pytest                          # for testing

def solution_1(input_string):
    """
    This solution uses internal python functions.
    :param input_string: self-explanatory.
    :return unique_chars: [boolean] answer.
    """
    input_set = set(input_string)
    unique_chars = False
    if len(input_string) == len(input_set):
        unique_chars = True
    return unique_chars


def solution_2(input_string):
    """
    Suppose the codification is ASCII.
    :param input_string: self-explanatory.
    :param boolean: [boolean] answer.
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

class Tests():
    """Class that contains all the tests."""
    def test1_solution1(self):
        solution_1(input_string="Lorem Impsum") == False    # 'm' repeated
    def test2_solution1(self):
        solution_1(input_string="Linus Torvalds") == False  # 's' repeated
    def test3_solution1(self):
        solution_1(input_string="abcdefghijklmnopqrstvwxyz") == True

    def test1_solution2(self):
        solution_2(input_string="Lorem Impsum") == False    # 'm' repeated
    def test2_solution2(self):
        solution_2(input_string="Linus Torvalds") == False  # 's' repeated
    def test3_solution2(self):
        solution_2(input_string="abcdefghijklmnopqrstvwxyz") == True
  
