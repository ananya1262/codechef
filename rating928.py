https://www.codechef.com/problems/REMISS
  a=int(input())
list1=[]
counter=0
while counter<a:
     b=list(map(int,input().split()))
     counter=counter+1
     list1.append(b)
for i ,z in list1:
    print(max(i,z),i+z)
