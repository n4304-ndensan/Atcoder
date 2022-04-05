N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

ans = 'Yes'

for b in B:
    if b in A:
        A.remove(b)
    else:
        ans = 'No'
        break

print(ans)

