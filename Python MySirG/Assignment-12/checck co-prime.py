n1=int(input("Enter the first number:"))
n2=int(input("Enter the second number:"))
if n1>n2:
    u=n1
    l=n2
else:
    u=n2
    l=n1
while u%l!=0:
    l+=1
if u==l:
    print("Co-prime")
else:
    print("Non co-prime")
