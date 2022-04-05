a, b, c, x = map(int, input().split())

if a >= x:
    print(1)
elif b >= x:
    ans = c / (b - a)
    print(ans)
else:
    print(0)