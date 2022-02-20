N, X = map(int, input().split())
n = [list(map(int, input().split())) for _ in range(N)]

print(n)

a = 0
b = 0
ans = []
'''
for x in n[0]:
    for y in n[1]:
        a += x + y
'''
index = 0
while index <= N-1:
    for i in range(2):
        for x in range(2):
            a += n[i][x] + n[]
            ans.append(a)
    index += 1

print(ans)

for i in range(1 << N):
    for j in range(N):
        if i >> j & 1:
            ans.append()



