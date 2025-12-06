class hello:
    def fun1(self):
        print("Hello all!!")
    def fun2(self):
        print("Life is to enjoy!!!")

class hi(hello):
    def fun1(self):
        print("Hi everyone!!")
    def fun_hi(self):
        print("Thank you!!")

obj1 = hello()
obj2 = hi()
obj1.fun1()
obj2.fun1()
obj2.fun2()