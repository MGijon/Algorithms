"Queue implemented in Python using two stacks."
class Queue:
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def enQueue(self, x):
        "EnQueue an item."
        self.stack1.append(x)

    def deQueue(self):
        "DeQueue an item."
        if (len(self.stack1) == 0) and (len(self.stack2) == 0):
            print("Queue is empty.\n")
            return
        elif (len(self.stack2) == 0) and (len(self.stack1) > 0):
            while len(self.stack1):
                temporal = self.stack1.pop()
                self.stack2.append(temporal)
            return self.stack2.pop()
        else:
            return self.stack2.pop()

if __name__ == "__main__":
    q = Queue()
    
    q.enQueue(1)
    q.enQueue(2)
    q.enQueue(3)

    print(q.deQueue())
    print(q.deQueue())
    print(q.deQueue())


