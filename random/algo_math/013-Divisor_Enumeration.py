

def make_divisor(N):
    l = []
    u = []
    i = 1
    while i*i <= N:
        if N % i == 0:
            l.append(i)
            if i != N // i:
                u.append(N//i)
        i += 1
    return l + u[::-1]

n = int(input())
divisor = make_divisor(n)
for i in divisor:
    print(i)
