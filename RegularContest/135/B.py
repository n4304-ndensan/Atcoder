import time

X = int(input())
start = time.time()
x = []
answer = []
x.append(X)
while True:
    x_set = set(x)
    if {2, 3, 4} >= x_set:
        break
    else:
        for i in x:
            i_count = int(x.count(i))
            if int(i) == 2 or int(i) == 3 or int(i) == 4:
                for n in range(i_count):
                    x.remove(i)
                    answer.append(i)
            else:
                if int(i) % 2 == 0:
                    num = int(i) / 2
                    for n in range(i_count):
                        x.remove(i)
                        x.append(int(num))
                        x.append(int(num))
                else:
                    num1 = int(i) / 2 - 0.5
                    num2 = int(i) / 2 + 0.5
                    for n in range(i_count):
                        x.remove(i)
                        x.append(int(num1))
                        x.append(int(num2))

n = 1
for i in answer:
    n *= i
n %= 998244353
endtime = time.time() - start
print(endtime)
print(n)

