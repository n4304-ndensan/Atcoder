N, X = map(int, input().split())
A = []
B = []
for _ in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

dp = [[False] * (X+1) for _ in range(N+1)]

dp[0][0] = True

for i in range(N):
    a = A[i]
    b = B[i]
    for j in range(X + 1):
        if j + a <= X:
            dp[i+1][j+a] |= dp[i][j]
        if j + b <= X:
            dp[i+1][j+b] |= dp[i][j]

if dp[N][X]:
    print('Yes')
else:
    print('No')


