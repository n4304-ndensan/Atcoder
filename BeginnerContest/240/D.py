N = int(input())
A = list(map(int, input().split()))

ans = []

for a in A:
    ans.append(a)
    count = 1
    num = len(ans) - 1
    if num-1 >= 0:
        while ans[num-1] == a:
            count += 1
            if count == a:
                del ans[-a:]
                break
            if num-1 >= 0:
                num -= 1
    print(len(ans))

