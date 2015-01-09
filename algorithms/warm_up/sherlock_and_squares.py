# Math library.
import math

# Very smart solution.
def number_of_squares(A, B):
    count = math.floor(math.sqrt(B)) - math.floor(math.sqrt(A - 1)) # Subtract one in case A is perfect square.
    return count

# Testcases.
T = int(input())

for _ in range(T):
    A, B = tuple(int(pair) for pair in input().split())
    print(number_of_squares(A, B))
