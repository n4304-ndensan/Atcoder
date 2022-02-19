N, K = map(int, input().split())
R = list(map(int, input().split()))


R.sort()
ans = 0
if K == 1:
    ans = R[-1] / 2
else:
    for i in R[-(K):]:
        ans = (ans + i) / 2


print(float(ans))