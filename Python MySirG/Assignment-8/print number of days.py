x=int(input("Enter the month number:"))
if x<1 | x>12:
    print("Please enter valid month number from 1 to 12:")
else:
    if x==1 | x==3 | x==5 |m, x==7 | x==8 | x==10 | x==12:
        print("31 Days")
    elif x==2:
        print("28 days in normal and 29 days in leap year")
    else:
        print("30 days")
