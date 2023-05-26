N, M, E = map(int, input().split())
U = []
for i in range(E):
    u = list(map(int, input().split()))
    U.append(u)
area = [[] for _ in range(N+M)]
for u in U:
    a, b = u[0], u[1]
    if a > N:
        if b > N:
            if a < b:
                area[a-1].append(b)
            else:
                area[b-1].append(a)
        else:
            area[a-1].append(b)
    else:
        if b > N:
            area[b-1].append(a)
        elif a < b:
            area[a-1].append(b)
Q = int(input())
for i in range(Q):
    x = int(input())
    a, b = U[x-1]
    if a > N:
        if b > N:
            if a < b:
                strong = a
                wse =b
            else:
                strong = b
                wse = a
        else:
            strong = a
            wse = b
    else:
        if b > N:
            strong = b
            wse = a
        if a < b:
            strong = a
            wse = b
    area[wse-1].remove(strong)
    count = 0
    out = []
    for u in range(1, N+1):
        c = 0
        for j in range(N, M+N):
            if u in area[j]:
                count += 1
                break
            else:
                c += 1
            if j == M+N-1:
                out.append(u)
    for o in out:
        for b in range(N):
            if o in area[b]:
                if not (b+1 in out):
                    count += 1
                    out.remove(o)
                    break
        for a in area[o-1]:
            if not (a in out):
                count += 1
                out.remove(o)
                break
    print(count)



