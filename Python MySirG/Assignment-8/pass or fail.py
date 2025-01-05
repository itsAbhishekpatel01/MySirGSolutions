s1=int(input("Enter the marks of subject 1:"))
s2=int(input("Enter the marks of subject 2:"))
s3=int(input("Enter the marks of subject 3:"))
s4=int(input("Enter the marks of subject 4:"))
s5=int(input("Enter the marks of subject 5:"))
add= (s1+s2+s3+s4+s5)
avg=add/5
per=avg
if avg<33:
    print("Fail")
else:
    if avg>59:
        print("%.2f passed with first division"%per)
    elif avg>39 & avg<60:
        print("%.2f  passed with second division"%per)
    else:
        print("%.2f passed with third division"%per)
        
        
