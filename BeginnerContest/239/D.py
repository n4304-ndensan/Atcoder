A, B, C, D = map(int, input().split())

s = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
     101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199]

a = [0 for _ in range(A, B+1)]

for o, i in enumerate(range(A, B+1)):
    for n in range(C, D+1):
        add = i + n
        if add in s:
            a[o] = 1

ans = 'Aoki'
for i in a:
    if i == 0:
        ans = 'Takahashi'

print(ans)

