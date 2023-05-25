N = int(input())
L = []
for i in range(N):
    l = list(input())
    L.append(l)


count = 0
for i in range(N):
    position = count
    for j in range(count, N):
        if i == j:
            if L[i][j] != '-':
                print('incorrect')
                exit()
        if L[i][j] == 'W':
            if L[position][count] != 'L':
                print('incorrect')
                exit()
        elif L[i][j] == 'L':
            if L[position][count] != 'W':
                print('incorrect')
                exit()
        elif L[i][j] == 'D':
            if L[position][count] != 'D':
                print('incorrect')
                exit()
        position += 1
    count += 1
print('correct')
            
