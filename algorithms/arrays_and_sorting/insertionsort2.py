def insertionSort(ar):
	for index in range(1, len(ar)):
		curr = ar[index]
		scanning = index - 1
		while scanning >= 0 and ar[scanning] > curr:
			ar[scanning + 1] = ar[scanning]
			ar[scanning] = curr
			scanning -= 1
		print(' '.join(str(num) for num in ar))

arr_size = input()
arr = [int(i) for i in input().strip().split()]
insertionSort(arr)
