#Kunal Sharma IIT JAMMU
t = int(input())
for i in range(0,t):
    l = int(input())
    str1 = input()
    str2 = input()
    n1 = str1.count("G")
    n2 = str2.count("G")
    x1 = str1.replace("G","B",n1)
    x2 = str2.replace("G","B",n2)
    if(x1 == x2):
        print("YES")
    else:
        print("NO")
