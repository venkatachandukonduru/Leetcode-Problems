class MyQueue:

    def __init__(self):
        self.s1,self.s2 = [], []

    def push(self, x: int) -> None:
        self.s1.append(x)

    def pop(self) -> int:
        while len(self.s1):self.s2.append(self.s1.pop())
        z = self.s2.pop()
        while len(self.s2):self.s1.append(self.s2.pop())
        return z

    def peek(self) -> int:
        while len(self.s1):self.s2.append(self.s1.pop())
        z = self.s2[-1]
        while len(self.s2):self.s1.append(self.s2.pop())
        return z

    def empty(self) -> bool:
        return not len(self.s1)


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()