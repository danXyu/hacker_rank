arr_size = input()
arr = [int(i) for i in input().strip().split()]
num_shifts = 0

for i in range(1, len(arr)):
    curr = arr[i]
    scanning = i - 1
    while(scanning >= 0 and arr[scanning] > curr):
        arr[scanning + 1] = arr[scanning]
        arr[scanning] = curr
        scanning -= 1
        num_shifts += 1

print(num_shifts)
