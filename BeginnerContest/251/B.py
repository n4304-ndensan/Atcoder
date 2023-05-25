N, W = map(int, input().split())
A = list(map(int, input().split()))

ans = set()
if N >= 3:
    for i in range(N-2):
        for j in range(i+1, N-1):
            for u in range(j+1, N):
                sum = A[i] + A[j] + A[u]
                if sum <= W:
                    ans.add(sum)

    for i in range(N-1):
        for j in range(i+1, N):
            sum = A[i] + A[j]
            if sum <= W:
                ans.add(sum)

    for i in A:
        if i <= W:
            ans.add(i)
elif N == 2:
    if A[0] <= W:
        ans.add(A[0])
    if A[1] <= W:
        ans.add(A[1])
    if A[0] + A[1] <= W:
        ans.add(A[0] + A[1])
else:
    if A[0] <= W:
        ans.add(A[0])

print(len(ans))
answer = 0
for i in range(4):
    print(i)
    answer += i
    print(answer)