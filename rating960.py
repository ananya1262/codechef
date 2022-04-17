a=int(input())
list1=[]
counter=0
while counter<a:
     b=list(map(int,input().split()))
     list1.append(b)
     counter=counter+1     
for i,z in list1:
    if i==z:
        print(1)
    elif i>z:
        if i%z==0:
            print(format(i/z,".0f"))
        else:
            print(-1)
    else:
        print(0)
