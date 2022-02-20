x1, y1, x2, y2 = map(int, input().split())

T = 'No'

a = []
a2 = []
aa = x1 - 1
a.append(aa)
aa = x1 + 1
a.append(aa)
aa = x1 - 2
a2.append(aa)
aa = x1 + 2
a2.append(aa)

b = []
b2 =[]
aa = y1 - 2
b.append(aa)
aa = y1 + 2
b.append(aa)
aa = y1 - 1
b2.append(aa)
aa = y1 + 1
b2.append(aa)

for i in a:
    for n in b:
        if (x2 - i)**2 + (y2 - n)**2 == 5:
            T = 'Yes'

for i in a2:
    for n in b2:
        if (x2 - i)**2 + (y2 - n)**2 == 5:
            T = 'Yes'

print(T)
