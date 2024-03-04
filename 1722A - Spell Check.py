#Kunal Sharma IIT JAMMU
r = int(input())
for i in range (0,r,1):
    n = int(input())
    s = input()
    ss = set(s)
    if(n == 5):
        if(ss == {"T","i","m","u","r"}):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
