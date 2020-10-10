"""To convert a Binary Tree to Binary Search Tree."""
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def storeInOrder(root, ordered):
    """To store in order the data from the nodes of a given tree."""
    if root is None:
        return

    storeInOrder(root.left, ordered)
    ordered.append(root.data)
    storeInOrder(root.right)

def countNodes(root):
    """Count the number of nodes in a given tree."""
    if root is None:
        return
    
    nodes_left = countNodes(root.left)
    nodes_right = countNodes(root.right)
    try:
        return(nodes_left + nodes_right + 1)
    except:
        print("Problem counting nodes.\n")
        return(0)

def arrayToBinarySearchTree(arr, root):
    """Create a Binary Search Tree from an array."""
    if root is None:
        return

    arrayToBinarySearchTree(arr, root.left)

    root.data = arr[0]
    arr.pop(0)

    arrayToBinarySearchTree(arr, root.right)

def binaryTreeToBinarySearchTree(root):
    """Converts a Binary Tree into a Binary Search Tree."""
    if root is None:
        return

    n = countNodes(root)
    arr = []
    storeInOrder(root, arr)
    arr.sort()
    arrayToBinarySearchTree(arr, root)

def printInOrder(root):
    """Print the data contained in the Tree."""
    if root is None:
        return
    printInOrder(root.left)
    print(root.data)
    printInOrder(root.right)

if __name__ == "__main__":
    root = Node(10)
    root.left = Node(30)
    root.right = Node(15)
    root.left.left = Node(23)
    root.right.right = Node(5)

    binaryTreeToBinarySearchTree(root)
    print("Data contained in the tree in order.\n")
    printInOrder(root)
