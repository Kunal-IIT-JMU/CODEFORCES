#Kunal Sharma IIT JAMMU
n = int(input())
result = input()
d = result.count("D")
a = result.count("A")
if(d>a):
    print("Danik")
elif (a>d):
    print("Anton")
else:
    print("Friendship")
