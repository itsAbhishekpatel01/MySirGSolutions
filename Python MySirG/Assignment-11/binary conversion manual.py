x=int(input("Enter any decimal number:"))
bin=0
while x!=0:
    rem=(x%2)
    bin=(bin*10)+rem
    x//=2
x=bin
bin=0
while x!=0:
    rem=(x%10)
    bin=(bin*10)+rem
    x//=10
print(bin)
