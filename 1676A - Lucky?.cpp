#Kunal Sharma IIT JAMMU
n = int(input())
for i in range(0,n):
    s = input()
    if(int(s[0]) + int(s[1]) + int(s[2]) == int(s[3]) + int(s[4]) + int(s[5])):
        print("YES")
    else:
        print("NO")
