r = int(input())
for i in range (0,r):
    n = int(input())
    lis = input().split();
    s = set(lis)
    t = tuple(s)
    n1 = lis.count(t[0])
    n2 = lis.count(t[1])
    if(n1 == 1):
        print(lis.index(t[0])+1)
    else:
        print(lis.index(t[1])+1)
