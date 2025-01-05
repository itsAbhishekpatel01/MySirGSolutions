x=int(input("Enter the value of n:"))
i=1
sum=0
while i<=2*x:
    sum+=i
    i+=2
print("The sum of first %d odd natural numbers:%d"%(x,sum))
