https://www.codechef.com/problems/MAYOR_PARTY
  for i in range(int(input())):
    a,b,c=map(int,input().split())
    if (a+c)>b:
        print(a+c)
    else:
        print(b)
