N = int(input())
numbers = list(map(int, input().split()))

ans = 0
for number in  numbers:
    ans += number

print(ans)

