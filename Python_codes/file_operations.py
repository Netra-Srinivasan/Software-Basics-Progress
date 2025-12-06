file = open("file.txt", "r+")
print(file.readable())
#print(file.readline())
#print(file.readlines())
#print(file.read())
for i in file.readlines():
    print(i)
file.write("\nI am the one!!")
file.close()