# Read in number of test cases.
T = int(input())

# Find the difference (num. of operations) between two values.
def difference(x, y):
    return abs(ord(x) - ord(y))

# Iterate of all test cases.
for i in range(T):
    palin_str = list(input())
    str_len = len(palin_str)
    num_oper, start, end = 0, 0, -1

    # Get number of operations.
    if str_len % 2 == 1:
        num_iter = int((str_len / 2) + 1)
    elif str_len % 2 == 0:
        num_iter = int(str_len / 2)

    # Iterate from start_val to end of palindrome.
    for i in range(num_iter):
        num_oper += difference(palin_str[start], palin_str[end])
        start += 1
        end -= 1

    print(num_oper)
