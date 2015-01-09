# Number of testcases.
T = int(input())

# Solve.
for _ in range(T):
    # Get the number of digit places.
    N = int(input())

    # Temporary placeholder values.
    N_temp, N_threes, N_fives = N, 0, 0

    # Compute the number of fives.
    # While greater, decrease by increments of 5 until multiple of 3 reached.
    while(N_temp > 0):
        if(N_temp % 3 == 0):
            N_fives = N_temp
            break
        N_temp -= 5

    # Compute the number of threes.
    N_threes = N - N_temp

    # Print answer.
    if(N_temp < 0 or N_threes % 5 != 0):
        print("-1")
    else:
        print("5"*N_fives + "3"*N_threes)

    
