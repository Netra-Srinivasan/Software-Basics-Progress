def max_nums(num1, num2, num3):
    if num1>=num2 and num1>=num3:
        print(num1, "is greater!")
    elif num2>=num1 and num2>=num3:
        print(num2, "is greater!")
    else:
        print(num3, "is greater!")

max_nums(1,2,3)

week = { "Sun" : "Sunday", "Mon" : "Monday", "Tue" : "Tuesday" }
print(week["Mon"])
print(week.get("Mon"))
print(week.get("hi"))
print(week.get("hi", "Undefined"))
print(week["Hi"])
