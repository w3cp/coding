class Calculator:
    def set(self, first, second):
        self.a = first
        self.b = second
    
    def add(self):
        return self.a + self.b

calc = Calculator()
calc.set(2, 2)
print calc.add()
