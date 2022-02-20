'順列全探索'

import itertools
arr = [0, 1, 2]

print(list(itertools.permutations(arr)))

itertools.permutations(iterable, r)

list(itertools.permutations([1, 2, 3, 4], 2))
# (1, 2), (1, 3), (1, 4), (2, 1), (2, 3), (2, 4),
# (3, 1), (3, 2), (3, 4), (4, 1), (4, 2), (4, 3)]

list(itertools.permutations([1, 2, 3]))
# [(1, 2, 3), (1, 3, 2), (2, 1, 3), (2, 3, 1), (3, 1, 2), (3, 2, 1)]

list(itertools.permutations(range(3), 2))
# [(0, 1), (0, 2), (1, 0), (1, 2), (2, 0), (2, 1)]
