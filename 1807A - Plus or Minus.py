#Kunal Sharma IIT JAMMU
r = int(input())
for i in range(0,r):
    (a,b,c) = map(int,input().split())
    if(a-b==c):
        print("-")
    else:
        print("+")
