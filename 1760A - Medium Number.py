#Kunal Sharma IIT JAMMU
r = int(input())
for i in range(0,r):
    (a,b,c) = map(int,input().split())
    lis = [a,b,c]
    M = max(lis)
    m = min(lis)
    lis.remove(M)
    lis.remove(m)
    print(lis[0])
