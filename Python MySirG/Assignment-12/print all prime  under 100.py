print("Prime numbers under 100 are:",end=' ')
x=2
while x!=100:
    i=2
    while x%i!=0:
        i+=1
    if x==i:
        print(x,end=' ')
    x+=1
