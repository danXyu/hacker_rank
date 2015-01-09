# !/usr/bin/python3
# Function to determine maximum xor value between two numbers.
def maxXor(l, r):
    # Use a dummy variable to contain the current maxXor.
    curr_max = 0

    # Nested for-loops allow all combinations to be tested.
    for i in range(l, r+1):
        for j in range(l, r+1):
            if i^j > curr_max:
                curr_max = i^j

    # Return the maxXor value.
    return curr_max


# Run the program.
if __name__ == '__main__':
  l = int(input())
  r = int(input())
  print(maxXor(l, r))
