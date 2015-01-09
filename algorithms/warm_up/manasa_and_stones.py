# Number of testcases.
T = int(input())

# Solve.
for _ in range(T):
    n, a, b = int(input()), int(input()), int(input())
    last_values = []

    # Get the new value, go through all permutations.
    # This includes the current incr for a and opposing side for b.
    for incr in range(n):
        new_value = a*incr + b*(n-incr-1)
        if((new_value not in last_values)):
            last_values.append(new_value)

    # Sort and print result.
    last_values.sort()
    print(" ".join(str(x) for x in last_values))
