# Get number of N (people) and M (topics).
N, M = tuple(int(item) for item in input().split())
max_topics, max_pairs = 0, 0
topics_array = []

# Feed into topics_array.
for _ in range(N):
    topics_array.append(int(input(), base=2))

# Solve.
for i in range(N):
    for j in range(i + 1, N):
        # Get the maximum number of 1s in binary combination.
        curr_topics_num = (topics_array[i] | topics_array[j])

        curr_topics = bin(curr_topics_num).count("1")

        #while(curr_topics_num > 0):
        #    curr_topics += 1
        #    curr_topics_num = curr_topics_num & (curr_topics_num - 1)

        # Switch if current is higher than max.
        if curr_topics > max_topics:
            max_topics = curr_topics
            max_pairs = 1
        # Increment number of pairs if greater than or equal.
        elif curr_topics == max_topics:
            max_pairs += 1

print(max_topics)
print(max_pairs)






    
