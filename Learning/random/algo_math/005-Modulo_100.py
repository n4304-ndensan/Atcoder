N = int(input())
numbers = list(map(int, input().split()))

sum_num = sum(numbers)

ans = sum_num % 100

print(ans)