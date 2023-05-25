a = list(map(int, input().split()))

red = [i for i in range(a[0], a[1]+1)]
blue = [i for i in range(a[2], a[3]+1)]

b = set(red) & set(blue)

if len(b) == 0:
    print(0)
else:
    print(len(b) - 1)

