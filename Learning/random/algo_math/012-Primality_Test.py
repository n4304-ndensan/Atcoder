import math


def primallity_test(n):
    a = math.sqrt(n)
    a = math.ceil(a)

    ans = 'Yes'
    for i in range(2, a):
        if n % i == 0:
            ans = 'No'

    return ans

n = int(input())
ans = primallity_test(n)
print(ans)
