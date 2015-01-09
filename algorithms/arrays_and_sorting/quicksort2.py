def quickSort(ar):
	if(len(ar) <= 1):
		return ar

	target = ar[0]
	lower = []
	upper = []

	for num in ar[1:]:
		if num < target:
			lower.append(num)
		elif num > target:
			upper.append(num)

	new_ar = quickSort(lower)
	new_ar.append(target)
	new_ar.extend(quickSort(upper))

	print(' '.join(str(n) for n in new_ar))

	return new_ar

n = input()
ar = [int(i) for i in input().strip().split()]
quickSort(ar)
