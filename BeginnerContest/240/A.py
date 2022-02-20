A, B = map(int, input().split())

ans = 'No'

if A == 1 and B == 10 or A == 10 and B == 1:
    ans = 'Yes'


if A + 1 == B or A - 1 == B:
    ans = 'Yes'

print(ans)