num1=int(input("Enter the first number:"))
num2=int(input("Enter the second number:"))
num3=int(input("Enter the third number:"))
if num1>num2:
    if num1>num3:
        print("%d is greatest"%num1)
    else:
        print("%d is greatest"%num3)
else:
    if num2>num3:
        print("%d is greatest"%num2)
    else:
        print("%d is greatest"%num3)
