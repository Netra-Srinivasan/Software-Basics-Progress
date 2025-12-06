class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def __str__(self):
        return f"{self.name} of age {self.age} is barking!"

dog = Dog("Bujji", 5)
print(dog)
