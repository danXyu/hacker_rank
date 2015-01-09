# Create the insertion sort method
def insertion_sort(arr):
	for index in range(1, len(arr)):
		curr_num = arr[index]
		before_index = index - 1

		while before_index >= 0 and curr_num < arr[before_index]:
			arr[before_index+1] = arr[before_index]
			print(' '.join(str(n) for n in arr))
			arr[before_index] = curr_num
			before_index -= 1

	print(' '.join(str(n) for n in arr))

# Get the input set
ar_size = input()
ar = [int(i) for i in input().strip().split()]

insertion_sort(ar)
