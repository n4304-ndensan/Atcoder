N, S = map(int, input().split())
A = list(map(int, input().split()))

S += 1
dp = [[-1] * S for _ in range(N+1)]

for i in range(N+1):
    if i == 0:
        dp[i][0] = 0
    else:
        for j in range(S):
            if not dp[i-1][j] == -1:
                dp[i][j] = dp[i-1][j]
                num = A[i-1] + j
                if num < S:
                    dp[i][num] = 0

ans = 'No'
if dp[N][S-1] == 0:
    ans = 'Yes'
print(ans)
