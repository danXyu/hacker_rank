# Enter your code here. Read input from STDIN. Print output to STDOUT

numCases = int(raw_input())
for case in range(numCases):
    n,c,m = [int(s) for s in raw_input().split()]
    numBought = n/c
    numWrappers = numBought
    while(numWrappers >= m):
        numBought += numWrappers/m
        numWrappers = numWrappers/m + numWrappers%m
    print numBought
