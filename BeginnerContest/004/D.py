R, G, B = map(int, input().split())
count = 0
'''
if R > 100 or G > 100 or B > 100:
    r = R -1
    for i in range(1, r+1):
        count += i

    b = B -1
    for i in range(b):
        count += i

    if G > 198:
        g = G - 199
        g_around = 198
        rr = r
        bb = b

        for i in range(g):
            if rr < bb:
                for n in range(rr):
                    count += n
                rr += 1
            else:
                for n in range(bb):
                    count += n
                bb += 1

        if g_around == 0:
            pass
        elif g_around % 2 == 0:
            right = int(g_around / 2)
            for i in range(1, right + 1):
                count += i
                count += i
        else:
            right = int(g_around / 2 + 1)
            left = int(g_around / 2)
            for i in range(1, right + 1):
                count += i
            if left > 0:
                for i in range(1, left + 1):
                    count += i
    else:
        g_around = G - 1
        if g_around == 0:
            pass
        elif g_around % 2 == 0:
            right = int(g_around / 2)
            for i in range(1, right + 1):
                count += i
                count += i
        else:
            right = int(g_around / 2 + 1)
            left = int(g_around / 2)
            for i in range(1, right + 1):
                count += i
            if left > 0:
                for i in range(1, left + 1):
                    count += i
else:
'''
r_around = R -1
if r_around == 0:
    pass
elif r_around % 2 == 0:
    right = int(r_around / 2)
    for i in range(1, right+1):
        count += i
        count += i
else:
    right = int(r_around / 2 + 1)
    left = int(r_around / 2)
    for i in range(1, right+1):
        count += i
    if left > 0:
        for i in range(1, left+1):
            count += i

g_around = G - 1
if g_around == 0:
    pass
elif g_around % 2 == 0:
    right = int(g_around / 2)
    for i in range(1, right+1):
        count += i
        count += i
else:
    right = int(g_around / 2 + 1)
    left = int(g_around / 2)
    for i in range(1, right+1):
        count += i
    if left > 0:
        for i in range(1, left+1):
            count += i

b_around = B -1
if b_around == 0:
    pass
elif b_around % 2 == 0:
    right = int(b_around / 2)
    for i in range(1, right + 1):
        count += i
        count += i
else:
    right = int(b_around / 2 + 1)
    left = int(b_around / 2)
    for i in range(1, right + 1):
        count += i
    if left > 0:
        for i in range(1, left + 1):
            count += i

print(count)