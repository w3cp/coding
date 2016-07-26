class Pet:
    
    def __init__(self, name): 
        self.name = name 
    
    def talk(self):
        pass

class Cat(Pet):
    def talk(self):
        print self.name + " says Meow!"

class Dog(Pet):
    def talk(self):
        print self.name + " says Hoof! Hoof!"

class Tiger(Pet):
    def talk(self):
        print self.name + " says Halum!"

class Mouse(Pet):
    def talk(self):
        print self.name + " Kich! Kich!"


cat = Cat("Bilai")
dog = Dog("Kuttush")
tiger = Tiger("Bug")
mouse = Mouse("Idur")

cat.talk()
dog.talk()
tiger.talk()
mouse.talk()
