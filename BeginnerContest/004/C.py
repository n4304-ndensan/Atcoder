ans = [1, 2, 3, 4, 5, 6]
N = int(input())

a = N % 30
c = a // 5
b = a % 5
if c > 0:
    for n in range(c):
        for i in range(5):
            ans[i], ans[i+1] = ans[i+1], ans[i]
for i in range(b):
    ans[i], ans[i + 1] = ans[i + 1], ans[i]


answer = 0
answer += ans[0] * 100000
answer += ans[1] * 10000
answer += ans[2] * 1000
answer += ans[3] * 100
answer += ans[4] * 10
answer += ans[5] * 1
print(answer)

