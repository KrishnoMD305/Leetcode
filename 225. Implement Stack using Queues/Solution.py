class MyStack:

    def __init__(self):
        self.k = []
    def push(self, x: int) -> None:
        self.k.append(x)

    def pop(self) -> int:
        tmp = self.k[-1]
        self.k.pop(-1)
        return tmp

    def top(self) -> int:
        return self.k[-1]

    def empty(self) -> bool:
        return not self.k


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
