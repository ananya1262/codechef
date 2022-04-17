https://www.codechef.com/problems/DOLL
  # cook your dish here
try:
 list1=[]
 for i in range(int(input())):
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    b.sort()
    c=list(filter(lambda x:x>a[1],b))
    c=len(c)       
    list1.append(c)
 for i in list1: 
    print(i)
except:
 pass    
