x=int(input("Enter the value of n:"))
i=1
fact=1
while i<=x:
    fact*=i
    i+=1
print("The factorial of %d:%d"%(x,fact))
