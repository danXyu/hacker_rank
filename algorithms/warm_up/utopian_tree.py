T = int(input())

for num_case in range(T):
  N = int(input())
  tree_height = 1

  for cycle in range(N):
    if cycle % 2 == 0:
      tree_height *= 2
    elif cycle % 2 == 1:
      tree_height += 1

  print(tree_height)
