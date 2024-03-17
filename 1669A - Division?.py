#Kunal Sharma IIT JAMMU
n = int(input())
for i in range(0,n):
    k = int(input())
    if(k>=1900):
        print("Division 1")
    if(k>=1600 and k<=1899):
        print("Division 2")
    if(k>=1400 and k<=1599):
        print("Division 3")
    if(k<=1399):
        print("Division 4")
