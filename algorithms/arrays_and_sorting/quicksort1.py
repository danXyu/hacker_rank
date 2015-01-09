def partition(ar):
	target = ar[0]
	lower = []
	upper = []
	for x in ar:
		if x < target:
			lower.append(x)
		elif x > target:
			upper.append(x)
	new_ar = [n for n in lower]
	new_ar.append(target)
	new_ar.extend(upper)
	print(' '.join(str(n) for n in new_ar))


n = input()
ar = [int(i) for i in input().strip().split()]
partition(ar)
