N = int(input())
names = [list(input().split()) for i in range(N)]

i = 0
b = 0
for n in names:
    b = 0
    s = n[0]
    t = n[1]
    i += 1
    for j in range(i, N):
        if s == names[j][0] or s == names[j][1]:
            b += 1

        if t == names[j][0] or t == names[j][1]:
            b += 1

        if b >= 2:
            print('No')
            exit()


print('Yes')
