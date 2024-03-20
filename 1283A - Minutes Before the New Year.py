#Kunal Sharma IIT JAMMU
r = int(input())
for i in range(0,r):
    h,m = map(int,input().split())
    tm = (23-h)*60 + (60-m)
    print(tm)
