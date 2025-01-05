x=int(input("Enter any number:"))
sum=0
while x!=0:
    sum+=(x%10)
    x//=10
print("Sum of digits is:%d"%sum)
    
