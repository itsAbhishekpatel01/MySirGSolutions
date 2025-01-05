n1=int(input("Enter the starting number:"))
n2=int(input("Enter the ending number:"))
print("Prime numbers from %d to %d are:"%(n1,n2),end=' ')
x=n1
while x<=n2:
    i=2
    while x%i!=0:
        i+=1
    if x==i:
        print(x,end=' ')
    x+=1
