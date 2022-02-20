N, K = map(int, input().split())

answer = 0
for i in range(1, N+1):
    if i >= K:
        answer += 1 / N
    else:
        num = i * 2
        count = 1
        while not num >= K:
            num *= 2
            count += 1
        answer += 1 / N * (1 / 2)**count

print(answer)