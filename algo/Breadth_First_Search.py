'幅優先探索'

from collections import deque
'''
入力例
4 4
1 2
2 3
3 4
4 2
'''
n, m = map(int, input().split())

graph = [[] for _ in range(n+1)]

for i in range(m):#それぞれがどの頂点と繋がっているかのリスト
 a, b = map(int, input().split())
 graph[a].append(b)
 graph[b].append(a)

dist = [-1] * (n+1)#distanceのリストの作成
dist[0] = 0
dist[1] = 0

d = deque()#探索行動を示すためのリスト
d.append(1)

while d:
 v = d.popleft()
 for i in graph[v]:
   if dist[i] != -1:
     continue
   dist[i] = dist[v] + 1
   d.append(i)

ans = dist[1:]
print(*ans, sep="\n")

'''
出力例
0
1
2
2
'''