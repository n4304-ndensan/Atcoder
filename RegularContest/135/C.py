X = int(input())

x = []
x.append(X)
while True:
    x_set = set(x)
    dict = {}
    if x_set == 1:
        break
    else:
        for i in x:
            if i not in dict:
            if int(i) == 2 or int(i) == 3 or int(i) == 4:
                continue
            else:
                if int(i) % 2 == 0:
                    num = int(i) / 2
                    x.remove(i)
                    x.append(int(num))
                    x.append(int(num))
                else:
                    num1 = int(i) / 2 - 0.5
                    num2 = int(i) / 2 + 0.5
                    x.remove(i)
                    x.append(int(num1))
                    x.append(int(num2))

n = 1
for i in x:
    n *= i

n %= 998244353

print(n)
