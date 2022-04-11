Q = int(input())
q = [list(map(int, input().split())) for _ in range(Q)]

list = []
for i in range(Q):
    ans = 0
    if q[i][0] == 1:
        for n in range(q[i][2]):
            list.append(q[i][1])
    else:
        for n in range(q[i][1]):
            num = list.pop(0)
            ans += num
        print(ans)


