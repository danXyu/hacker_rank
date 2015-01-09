# Number of testcases.
T = int(input())

# Function to determine fibonaciness.
def isFib(N):
    prev, curr = 0, 1

    # Quit iteration when curr is greater || equal to N.
    while(curr < N):
        temp, prev = prev, curr
        curr += temp

    # Test if curr == N.
    if curr == N:
        return "IsFibo"
    else:
        return "IsNotFibo"

# Solve.
for _ in range(T):
    N = int(input())
    print(isFib(N))
