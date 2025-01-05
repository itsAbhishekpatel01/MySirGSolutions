x=2*(int(input("Enter the value of n:")))
i=x
print("The first n natural numbers in reverse order are:")
while i>=1:
    if i%2!=0:
        print(i,end =' ')
    i-=1
    
