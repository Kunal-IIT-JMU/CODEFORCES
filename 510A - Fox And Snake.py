#Kunal Sharma IIT JAMMU
(row,col) = map(int,input().split())

for i in range(1,row+1,1):
    if(i ==1):
        print("#"*col)
    else:
        if(i%2 == 0 and i%4 != 0):
            print("."*(col- 1) + "#")
        elif(i%4 == 0):
            print("#" + "."*(col - 1))
        else:
            print("#"*col)
