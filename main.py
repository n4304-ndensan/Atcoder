import random

import numpy as np

num = np.zeros((4, 4), dtype=np.int16)
print(num)
num[1, 1] = 1
print(num)
print(len(num))

action_list = ['.', 'u', 'd', 'l', 'a', 'U', 'D', 'L', 'A']
print(random.choices(action_list, k=len(action_list)))
print(1 == [1, 2, 3, 4])
