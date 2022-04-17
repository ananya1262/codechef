https://www.codechef.com/problems/LOCKDRAW
for i in range(int(input())):
    a=list(map(int,input().split()))
    a.sort()
    if a[0]+a[1]==a[2]:
        print("YES")
    else:
        print("NO")
