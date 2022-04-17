https://www.codechef.com/problems/KEPLERSLAW
  list1=[]
sum=0
for i in range(int(input())):
      a,b,c,d=input().split()
      a=int(a)
      b=int(b) 
      c=int(c)
      d=int(d)            
      if a**2/c**3==b**2/d**3:
          print("YES")
      else:
          print("NO")
        # cook your dish here
