xa, ya, xb, yb, xc, yc = map(int, input().split())
# (xa, ya)が原点になるように三角形を平行移動する。
a = xb - xa
b = yb - ya
c = xc - xa
d = yc - ya
s = abs(a*d-b*c)/2
print(s)





