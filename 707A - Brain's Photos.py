#Kunal Sharma IIT JAMMU
(a,b) = map(int,input().split())
master = []
for i in range(0,a):
    s= input().split()
    master = master + s
s2 = set(master)
if("M" not in s2 and "Y" not in s2 and "C" not in s2):
    print("#Black&White")
else:
    print("#Color")
