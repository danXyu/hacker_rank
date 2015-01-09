# Get line and split into array of letters.
agram_arr = list(input())
agram_dic = dict()
count = 0 # Odd count.

# Insert letters into anagram dictionary.
for lett in agram_arr:
    if lett in agram_dic.keys():
        agram_dic[lett] += 1
    else:
        agram_dic[lett] = 1

for key, value in agram_dic.items():
    if value % 2 == 1:
        count += 1

if count > 1:
    print("NO")
else:
    print("YES")
