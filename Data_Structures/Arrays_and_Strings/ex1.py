"""
Implement an algorithm to determine if a string has all unique characteres.
What if you cannot use additional data structures?
"""

def is_unique_chars(input_string):
    """
    """

    if len(input_string) > 128:
        output_value = False

    list_characters = [x for x in input_string]
