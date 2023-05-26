N = int(input())
d = dict()
for i in range(N):
    text = input()
    if text not in d.keys():
        print(text)
        d[text] = 0
    else:
        d[text] += 1
        print(f'{text}({d[text]})')