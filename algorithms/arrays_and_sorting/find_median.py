import random
import array

def find_median(arr, low, high, mid):
    # Base case: less than two elements remaining.
    if high - low < 2:
        if high - low == 1:
            return arr[low]
        return

    # Create random index between low and high and switch with low.
    temp = random.randint(low, high - 1)
    arr[low], arr[temp] = arr[temp], arr[low]

    # Sort the array.
    index = low + 1
    for x in xrange(low + 1, high):
        if arr[x] <= arr[low]:
            arr[index], arr[x] = arr[x], arr[index]
            index += 1
    top_val = index - 1;
    arr[low], arr[top_val] = arr[top_val], arr[low]

    # Recurse depending on value found w/respect to mid element.
    if top_val == mid:
        return arr[top_val]
    if top_val < mid:
        return find_median(arr, index, high, mid)
    if top_val > mid:
        return find_median(arr, low, index - 1, mid)

n = int(raw_input())
arr = array.array('l')
arr.fromlist(map(int, raw_input().split()))
print find_median(arr, 0, n, n/2)
