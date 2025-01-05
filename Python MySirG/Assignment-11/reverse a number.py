x=int(input("Enter any  number:"))
new=0
while x!=0:
    rem=(x%10)
    new=(new*10)+rem
    x//=10
print(new)
