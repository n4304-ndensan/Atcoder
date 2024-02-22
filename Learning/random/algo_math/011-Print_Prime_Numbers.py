

def prime_numbers(n):
    primes = []

    m = 2
    while m <= n:
        if all(m % i != 0 for i in primes):
            primes.append(m)
        m += 1

    return primes

n = int(input())
ans = prime_numbers(n)
ans = [str(i) for i in ans]
ans = ' '.join(ans)
print(ans)

