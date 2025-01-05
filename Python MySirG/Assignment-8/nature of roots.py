a=int(input("Enter the value of a:"))
b=int(input("Enter the value of b:"))
c=int(input("Enter the value of c:"))
D=((b**2)-4*a*c)
if D>0:
    print("Real and unequal")
elif D==0:
    print("Real and equal")
else:
    print("Imaginary roots")

