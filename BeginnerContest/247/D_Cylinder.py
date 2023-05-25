Q = int(input())
q = [list(map(int, input().split())) for _ in range(Q)]

list = []
for i in range(Q):
    ans = 0
    if q[i][0] == 1:
        list.append([q[i][1], q[i][2]])
    else:
        num = q[i][1]
        index = 0
        while num != 0:
            if q[i][1] > list[index][1]:
                ans += list[index][0] * list[0][1]
                num -= list[index][1]
                index += 1
            else:
                ans += list[index][0] * num
                list[index][1] -= num
                num = 0
        print(ans)
