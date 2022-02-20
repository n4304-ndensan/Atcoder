S = str(input())
y = int(S[0] + S[1])
m = int(S[2] + S[3])

if (1 > m or m > 12) and (1 > y or y > 12):
    print('NA')
elif 1 <= y <= 12 and 1 <= m <= 12:
    print('AMBIGUOUS')
elif 1 > m or m > 12:
    print('MMYY')
elif 1 > y or y > 12:
    print('YYMM')

