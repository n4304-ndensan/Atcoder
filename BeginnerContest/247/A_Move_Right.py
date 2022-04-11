S = str(input())

s = []
for i in S:
    s.append(int(i))

list = ['0', '0', '0', '0']
for i in range(1, 4):
    if s[i-1] == 1:
        list[i] = '1'

ans = ''.join(list)
print(ans)
