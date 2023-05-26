nums = list(map(int, input().split()))

hand = dict()

for i in nums:
    if i in hand:
        hand[i] += 1
    else:
        hand[i] = 1

if 2 in hand.values() and 3 in hand.values():
    print('Yes')
else:
    print('No')