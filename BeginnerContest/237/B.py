


def hoge(*a):
    print(a)

def hogg(**b):
    print(b)

a = [1, 2, 3, 4, 5, 6]
b = {'k': 1, 'b': 2, 'f': 3}
print(*a)
print()
hogg(b)