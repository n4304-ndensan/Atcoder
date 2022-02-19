N, M = map(int, input().split())
XY =[]
for _ in range(M):
    xy = list(map(int, input().split()))
    XY.append(xy)
def a(M, XY):
    if M == 0:
        return 1
    a = {}
    for i in range(1, M+1):
        a[i] = 0
    for xy in XY:
        num = xy[0]
        a[num] += 1

    max_a = max(a.values())
    return (max_a + 1)


ans = a(M, XY)
print(ans)