N = int(input())
P = list(map(int, input().split()))
Q = int(input())
R = [list(map(int, input().split())) for _ in range(Q)]

for r in R:
  a = P.index(r[0])  
  b = P.index(r[1])
  print(P[min(a, b)])
