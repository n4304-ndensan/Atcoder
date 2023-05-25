N = int(input())

S = [list() for i in range(N)]

def makeS(n):
    if n == 1:
        return n
    else:
        makes = makeS(n-1)
        return str(makes) + ' ' + str(n) + ' ' +str(makes)


ans = makeS(N)
print(ans)



