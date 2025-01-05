l1=[4,3,5,1,2]
count1=-1
for i in l1:
    count1+=1
    count2=-1
    for j in l1:
        count2+=1
        if i<j:
            temp=l1[count1]
            l1[count1]=l1[count2]
            l1[count2]=temp
print(l1)
