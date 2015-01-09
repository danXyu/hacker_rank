# Get number of testcases.
T = int(input())

# Solve.
for _ in range(T):
    # Convert into array of integers.
    test_case = int(input())
    test_c_arr = list(map(int, list(str(test_case))))
    test_c_len = len(test_c_arr)
    count = 0 # Running counter for number of digits.

    for digit in range(test_c_len):
        if test_c_arr[digit] != 0 and test_case % test_c_arr[digit] == 0:
            count += 1

    # Print result.
    print(count)
