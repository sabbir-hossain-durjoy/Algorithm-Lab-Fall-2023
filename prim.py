INF = 10**18
n, m = map(int, input().split())
g = [[INF]*(n+1) for _ in range(n+1)]
for _ in range(m):
    u, v, w = map(int, input().split())
    if w < g[u][v]:
        g[u][v] = w
        g[v][u] = w
used = [0]*(n+1)
key = [INF]*(n+1)
key[1] = 0
ans = 0
for _ in range(n):
    x = -1
    for i in range(1, n+1):
        if not used[i] and (x == -1 or key[i] < key[x]):
            x = i
    if x == -1 or key[x] == INF:
        break
    used[x] = 1
    ans += key[x]
    for j in range(1, n+1):
        if not used[j] and g[x][j] < key[j]:
            key[j] = g[x][j]
print(ans)
