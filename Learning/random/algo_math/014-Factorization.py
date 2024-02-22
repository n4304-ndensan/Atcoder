

def prime_factorize(n):
    l = []
    while n % 2 == 0:
        l.append(2)
        n //= 2
    f = 3
    while f * f <= n:
        if n % f == 0:
            l.append(f)
            n //= f
        else:
            f += 2
    if n != 1:
        l.append(n)
    return l


n = int(input())
ans = prime_factorize(n)
ans = [str(i) for i in ans]
ans = ' '.join(ans)
print(ans)


