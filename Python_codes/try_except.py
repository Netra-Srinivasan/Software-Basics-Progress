try:
    num = int(input("Enter a number:"))
    print(num)
except ValueError as e:
    print("Error raising as ",e,"!! Enter a valid input!")
except ZeroDivisionError:
    print("Enter proper input")