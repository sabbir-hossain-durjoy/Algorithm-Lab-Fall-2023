INF = 10**18
n, m = map(int, input().split())
g = [[INF]*(n+1) for _ in range(n+1)]
for i in range(1, n+1):
    g[i][i] = 0
for _ in range(m):
    u, v, w = map(int, input().split())
    if w < g[u][v]:
        g[u][v] = w
        g[v][u] = w
s = int(input())
dist = [INF]*(n+1)
vis = [0]*(n+1)
dist[s] = 0
for _ in range(n):
    x = -1
    for i in range(1, n+1):
        if not vis[i] and (x == -1 or dist[i] < dist[x]):
            x = i
    if x == -1 or dist[x] == INF:
        break
    vis[x] = 1
    for j in range(1, n+1):
        if g[x][j] < INF and dist[x] + g[x][j] < dist[j]:
            dist[j] = dist[x] + g[x][j]
print(" ".join(str(-1 if dist[i] >= INF else dist[i]) for i in range(1, n+1)))
