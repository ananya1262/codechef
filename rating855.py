#ab
https://www.codechef.com/problems/CHEFTRANS
  try:
 list1=[]
 for i in range(int(input())):
    a,b,c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    if a+b>c:
        list1.append("TRAIN")
    elif a+b<c:
        list1.append("PLANEBUS")
    else:
        list1.append("EQUAL")
 for i in list1:
  print(i) 
except:
 pass       
