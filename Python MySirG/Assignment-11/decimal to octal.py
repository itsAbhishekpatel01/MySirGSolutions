x=int(input("Enter any decimal number:"))
oct=0
while x!=0:
    rem=(x%8)
    oct=(oct*10)+rem
    x//=8
x=oct
oct=0
while x!=0:
    rem=(x%10)
    oct=(oct*10)+rem
    x//=10
print(oct)

