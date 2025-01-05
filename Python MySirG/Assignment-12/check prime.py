x=int(input("Enter any number:"))
i=2
while x%i!=0:
    i+=1
if i==x:
    print("Prime")
else:
    print("Not-prime")
