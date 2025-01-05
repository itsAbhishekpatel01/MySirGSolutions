n1=int(input("Enter the first number:"))
n2=int(input("Enter the second number:"))
if n1<n2:
    hcf=n1
else:
    hcf=n2
i=hcf
while i>=1:
    HCF=i
    i-=1
    if(n1%hcf==0 and n2%hcf==0):
        break;
print("HCF=%d"%HCF)
