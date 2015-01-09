# Get the number of sticks, which ends up being useless.
N = int(input())

# Get the array of sticks.
sticks_array = [int(stick) for stick in input().split()]
sticks_len = len(sticks_array)

# Solve by reducing the array.
while(True):
    # Creating dummy smallest value.
    sticks_small = sticks_array[0]

    # Find the smallest value in the sticks_array.
    for i in range(sticks_len):
        if sticks_array[i] < sticks_small:
            sticks_small = sticks_array[i]

    # Reduce the entire array by the smallest value.
    for j in range(sticks_len):
        sticks_array[j] -= sticks_small

    # Remove index value if equal to 0.
    sticks_array = list(filter(lambda stick: stick != 0, sticks_array))

    # Give the solution.
    print(sticks_len)
    # Finally update sticks_len variable.
    sticks_len = len(sticks_array)

    # Escape case.
    if sticks_len == 0:
        break

    
