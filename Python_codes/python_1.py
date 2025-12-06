name = "Netra Srinivasan"
age = 21
print("Hi I am ",name,"! I am ",age," years old..!!")
print("Hi\"all!!")
print(name.index("v"))
print(name.replace("Netra", "Alamelu"))
print(10/3)
print(10%3)
print(10//3)

#name = input("Enter ur name: ")
print("You are "+name)
#age =float(input("Age : "))
print(age)
print(int(age))

nums = [1, False, "Netra"]
print(nums[1:2])
nums.append(3)
nums.insert(1,2)
print(nums)
nums.remove(2)
print(nums)
#nums.clear()
#print(nums)
print(nums.count('Netra'))
print(nums.count(2))
hii = [1,2,3,5,4,7,6]
hi = ["Netra", "Amma"]
hii.sort()
hi.sort()
print(hii)
print(hi)

def cube(name, num):
    print("Hi ",name,"!\n\tYour Answer is ",num*num*num)

cube("Netra Srinivasan", 4)