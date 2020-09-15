"""Stack."""
import sys

def createStack():
    """Creates a stack, initizlizing the size as 0."""
    stack = []
    return stack

def isEmpty(stack):
    """Check if the stack is empyt or not."""
    return len(stack) == 0

def push(stack, item):
    """Adds an item to the stack."""
    stack.append(item)
    print("An item,", item, ", has been added to the stack.")

def pop(stack):
    """Removes an item from the stack."""
    if (isEmpty(stack)):
        return str(-maxsize -1) # Returns minus infinity
    
    return stack.pop()

def peek(stack):
    """Function to return the top from stack without removing it."""
    if (isEmpty(stack)):
        return str(-maxsize -1)
    return stack[len(stack) -1]


if __name__ == "__main__":
    stack = createStack()

    push(stack, str(1))
    push(stack, str(2))
    push(stack, str(4))

    


