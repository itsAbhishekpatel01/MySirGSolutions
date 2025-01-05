n=int(input("Enter the value of n:"))
print("First %d prime numbers are:"%n,end=' ')
x=2
count=1
while count<=n:
    i=2
    while x%i!=0:
        i+=1
    if x==i:
        print(x,end=' ')
        count+=1
    x+=1
