N = int(input())
S = []
T = []
for i in range(N):
    s, t = input().split()
    t = int(t)
    S.append(s)
    T.append(t)

s = set()
num = -1
for i in range(N):
    if S[i] in s:
        continue
    else:
        s.add(S[i])
        if num < T[i]:
            num = T[i]
            ans = i

print(ans + 1)






