#Kunal Sharma IIT JAMMU
cube = int(input())
sum = 0
count = 0
i = 1
j = 2
while (sum < cube and (cube-sum)>=i):
    sum = sum + i
    i = i+j
    j = j+1
    count = count + 1
print(count)
