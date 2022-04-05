N = int(input())
S = list(input().split() for _ in range(N))

for i in range(N-1):
    for n in range(N-6):
        s1 = S[i][n]
        s2 = S[i]