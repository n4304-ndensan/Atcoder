'''全探索'''

k, s = map(int, input().split())
ans = 0
for x in range(k+1):
    #範囲がk以下なのでrangeはk+1
    for y in range(k+1):
        for z in range(k+1):
            if x+y+z == s:
                ans += 1
print(ans)


