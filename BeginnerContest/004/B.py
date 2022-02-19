C = [input().split() for _ in range(4)]

C[0], C[3] = C[3], C[0]
C[1], C[2] = C[2], C[1]

for i in range(4):
    C[i][0], C[i][3] = C[i][3], C[i][0]
    C[i][1], C[i][2] = C[i][2], C[i][1]

for i in C:
    print(i[0], i[1], i[2], i[3])