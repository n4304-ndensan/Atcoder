S = input()
T = input()

S = list(S)
T = list(T)
a = True
for i in range(len(S)):
    if S[i] == '@' and T[i] == '@':
        pass
    else:
        if S[i] == '@':
            if T[i] in ['a', 't', 'c', 'o',
                        'd', 'e', 'r']:
                S[i] = T[i]
            else:
                ans = 'You will lose'
                a = False
        elif T[i] == '@':
            if S[i] in ['a', 't', 'c', 'o',
                        'd', 'e', 'r']:
                T[i] = S[i]
            else:
                ans = 'You will lose'
                a = False

S = ''.join(S)
T = ''.join(T)
if a:
    ans = 'You can win'

if not S == T:
    ans = 'You will lose'
print(ans)
