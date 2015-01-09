# Read N and M.
first_line, total = [int(n) for n in input().split()], 0
N, M = first_line[0], first_line[1]

# Solve.
for n in range(M):
    oper = [int(num) for num in input().split()]
    a, b, k = oper[0], oper[1], oper[2]

    size = b - a + 1 # Add one because inclusive.
    total += size * k

average = int(total / N)
print(average)


    
