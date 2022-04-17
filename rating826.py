https://www.codechef.com/problems/GENE01
  try:
    a=list(map(str,input().split()))
    b=len(set(a))
    if b==1:
     print(a[0])
    else:
     if a[0]=="R" and a[1]=="B" or a[1]=="R" and a[0]=="B" :
        print("R")
     elif  a[0]=="G" and a[1]=="B" or a[0]=="B" and a[1]=="G":
        print("B")
     else:
        print("R")
except:
    pass
        
