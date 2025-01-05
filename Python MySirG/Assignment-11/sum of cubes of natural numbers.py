x=int(input("Enter the value of n:"))
i=1
add=0
while i<=x:
    add=add+i**3
    i+=1
print("The sum of cubes of first %d natural numbers is %d"%(x,add))
