class Calculator:
    def set(self, first, second):
        self.a = first
        self.b = second
    
    def add(self):
        return self.a + self.b

class NewCalculator(Calculator):
    def multiply(self):
        return self.a * self.b

calc = NewCalculator()
calc.set(2, 3)
print calc.multiply()
