N, S = map(int, input().split())

count = 0
for red_card in range(1, N+1):
    for blue_card in range(1, N+1):
        if red_card + blue_card <= S:
            count += 1

print(count)
