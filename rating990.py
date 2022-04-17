https://www.codechef.com/problems/CAN_REACH
  a=int(input())
list1=[]
counter=0
while counter<a:
     b=list(map(int,input().split()))
     list1.append(b)
     counter=counter+1     
for x,y,k in list1:
    if x%k==0 and y%k==0:
        print("YES")
    else:
        print("NO")
