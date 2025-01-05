n1=int(input("Enter the first number:"))
n2=int(input("Enter the second number:"))
if n1>n2:
    u=n1
    l=n2
else:
    u=n2
    l=n1
LCM=1
i=1
while LCM%l!=0:
    LCM=u*i
    i+=1
print("LCM=%d"%LCM)
