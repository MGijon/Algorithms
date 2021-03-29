"""
CHECK_PERMUTATION:
==================
Given two strings, write a method to decide is one is a permutation of the other.
"""
import pytest                          # for testing
from collections import Counter        # a solution using pre-built functions

def solution1(str1, str2):
    """
    :param str1: input string 1.
    :param str2: input string 2.
    """
    if len(str1) != len(str2):         # observe that if the length is different one can not be a permutation of the another one
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


class Tests():
    """Contains the tests."""
    def test1(self):
        assert solution1(str1="dog", str2="god") == True
    def test2(self):
        assert solution1(str1="else", str2="sel") == False
    def test3(self):
        assert solution1(str1="else", str2="sel") == False
    def test4(self):
        assert solution1(str1="huesca", str2="huesco") == False

