"""Simple Linked List."""

class Node:

    def __init__(self, data):
        self.data = data # Data
        self.next = None # Reference to the next element of the linked list

class LinkedList:

    def __init__(self):
        self.head = None # First element of the list

    def printList(self):
        """Prints the content of a linked list."""
        temporal = self.head
        while temporal:
            print(temporal.data)
            temporal = temporal.next 

if __name__ == "__main__":

    linkedL = LinkedList()  # Initizialize the list as empty

    linkedL.head = Node(1)  # Add the first element to the list

    second = Node(2)  # Add data of the second node 
    linkedL.head.next = second  # Include the second node as the next element in the list

    third = Node(3)  # Add data od the third node
    second.next = third  # Links the third node to the second one

    fourth = Node(4)  # And so on...
    third.next = fourth
    
    linkedL.printList()


