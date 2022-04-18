#123
https://www.codechef.com/problems/LUCKFOUR
  a=int(input())
list1=[]
counter=0
while counter<a:
    b=input()
    list1.append(b)
    counter=counter+1
for i in list1:
    print(i.count("4"))
