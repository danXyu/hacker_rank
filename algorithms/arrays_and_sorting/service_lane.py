n,t = map(int, input().strip().split())
width = list(map(int, input().strip().split()))

for x in range(0, t):
    i,j = map(int, input().strip().split())
    minW = 3 #max width possible
    for n in range(i, j+1):
        minW = min(minW, width[n])
    print(minW)
