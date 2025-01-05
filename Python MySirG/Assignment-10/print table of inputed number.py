x=int(input("Enter any number:"))
i=1
print("The table of %d is printed below:"%x)
while i<=10:
    print("%dx%d=%d"%(x,i,x*i))
    i+=1
