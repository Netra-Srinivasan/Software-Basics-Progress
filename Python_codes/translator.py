word = input("Enter word :")
temp = word
for letter in word:
    if letter in "AEIOUaeiou":
        temp = temp.replace(letter, "g")
print(temp)