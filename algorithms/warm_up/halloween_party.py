# Get the number of test cases.
T = int(input())

# Iterate over all the test cases.
for i in range(T):
    K = int(input()) # Get the maximum number of cuts.

    # The solution is that a (K/2)x(K/2) rectangle is formed.
    # All we have to do is then multiply those values.
    if K % 2 == 0:
        sol_value = int(K/2) * int(K/2)
    elif K % 2 == 1:
        sol_value = int(K/2+1) * int(K/2)

    # Print solution value.
    print(sol_value)
