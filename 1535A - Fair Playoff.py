#Kunal Sharma IIT JAMMU
n = int(input())
for i in range(0,n):
    (a,b,c,d) = map(int,input().split())
    lis = [a,b,c,d]
    if(b>a):
        t1 = b
    else:
        t1 = a
    if(c>d):
        t2 = c
    else:
        t2 = d
    s1 = {t1,t2}
    M1 = max(lis)
    lis.remove(M1)
    M2 = max(lis)
    s2 = {M1,M2}
    if(s1 == s2):
        print("YES")
    else:
        print("NO")
