N, Q = map(int, input().split())
X = list(map(int, input().split()))
A = [list(map(int, input().split())) for _ in range(1, N)]
Q = [list(map(int, input().split())) for _ in range(Q)]

x = [[] for _ in range(N)]
print(x)

for i in A:
    x[i[0]-1].append(i[1])
    x[i[1]-1].append(i[0])

for i in Q:
