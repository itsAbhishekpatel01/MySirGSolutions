n=int(input("Enter the value of n:"))
a,b,i=(-1,1,1)
print("The first %d terms of fibonacci series are:"%n)
while i<=n:
    c=a+b
    print(c,end=' ')
    a=b
    b=c
    i+=1
