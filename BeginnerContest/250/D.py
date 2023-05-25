import math

N = int(input())


def sieve_of_eratosthenes(n):
    max_num = int(pow(n, 1/3)) + 1
    candidate = [i for i in range(2, max_num)]
    prime = []
    limit = math.sqrt(n) + 1

    while True:
        if not candidate:
            break
        p = min(candidate)
        if limit <= p:
            prime.extend(candidate)
            break
        prime.append(p)

        candidate = [i for i in candidate if i % p != 0]

    return prime


if N <= 1:
    print(0)
    exit()

prime = sieve_of_eratosthenes(N)
rev_prime = prime[::-1]
ans = 0
len_prime = len(prime)
for i in range(len_prime):
    for j in range(len_prime - i):
        nums = prime[i] * rev_prime[j]**3
        if nums <= N:
            ans += len_prime - j - i - 1
            break

print(ans)

for i in range(1):
    print(1)