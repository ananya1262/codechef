https://www.codechef.com/problems/TWOROOKS
list1=[]

for i in range(int(input())):
    a=list(map(int,input().split()))
    list1.append(a)
for i in list1:   
  if i[0]==i[2] or i[1]==i[3]:
    print("YES")
  else:
    print("NO")
