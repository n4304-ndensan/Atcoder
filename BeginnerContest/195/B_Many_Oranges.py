A,B,W = map(int, input().split())
MI = -(-W*1000//B)
MA = W*1000//A
if MI>MA:
    print('UNSATISFIABLE')
else:
    print(MI,MA)