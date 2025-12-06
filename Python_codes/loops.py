#for i in range(1,11):
#    print(i)

for i in range(1,11,2):
    print(i)

#i=1 
#while i<=10:
#    print(i)
#    i+=1


#guessing game
word = "netra"
guess = ""
count = 0

while guess!=word and count<3:
    count+=1
    guess = input("Enter guess: ")
    if(guess>word):
        print("Beyond starting alphabet!!")
    elif(guess<word):
        print("Before starting alphabet!!")
if(count>=3):
    print("Attempts failed!")
else:
    print("Guessed right!!")