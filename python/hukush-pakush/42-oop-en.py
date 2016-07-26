class Calculator:
    def set(self, first, second):
        self.a = first
        self.b = second
    
    def add(self):
        return self.a + self.b

calc1 = Calculator()
calc2 = Calculator()

calc1.set(2, 2)
calc2.set(5,12)

print calc1.add()
print calc2.add()
