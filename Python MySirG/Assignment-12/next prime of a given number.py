n=int(input("Enter any number:"))
print("Next prime is:",end='')
n+=1
flag=0
while 1:
    i=2
    while n%i!=0:
        i+=1
    if n==i:
        print(n)
        flag=1
        break
    if flag==1:
        break
    n+=1

    
    
