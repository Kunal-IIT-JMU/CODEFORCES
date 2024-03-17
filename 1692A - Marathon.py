#Kunal Sharma IIT JAMMU
n = int(input())
for i in range(0,n):
    (a,b,c,d) = map(int,input().split())
    ans =0;
    if(b>a):
        ans = ans + 1
    if(c>a):
        ans = ans + 1
    if(d>a):
        ans = ans + 1
    print(ans)
