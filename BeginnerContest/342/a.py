S = input()

SS = dict()
count = 0
for s in S:
    if s in SS:
        SS[s] += 1
        break
    else:
        SS[s] = 1

ss = max(SS.values())
# SSのvalueが2以上のkeyを所得
max_key = max(SS, key=SS.get)

for (i, s) in enumerate(S):
    if s != max_key:
        print(i+1)
        break