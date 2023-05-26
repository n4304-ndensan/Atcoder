N, A, B = map(int, input().split())

white = '.' * B
black = '#' * B

num1 = 1
for i in range(N):
    for j in range(A):
        if num1 % 2 == 0:
            num = 1
            ans = black
            for l in range(N-1):
                if num % 2 == 0:
                    ans += black
                    num += 1
                else:
                    ans += white
                    num += 1
            print(ans)
        else:
            num = 1
            ans = white
            for l in range(N-1):
                if num % 2 == 0:
                    ans += white
                    num += 1
                else:
                    ans += black
                    num += 1
            print(ans)
    num1 += 1