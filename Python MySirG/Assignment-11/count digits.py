x=int(input("Enter the value of n:"))
count=1
if x==0:
    print("Zero digits")
else:
    while x//10!=0:
        count+=1
        x//=10
    print("%d digits"%count)
    
    

