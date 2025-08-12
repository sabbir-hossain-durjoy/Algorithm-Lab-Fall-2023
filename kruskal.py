n, m = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(m)]
edges.sort(key=lambda x: x[2])
parent = list(range(n+1))
def find(x):
    while parent[x] != x:
        x = parent[x]
    return x
ans = 0
cnt = 0
for u, v, w in edges:
    a, b = find(u), find(v)
    if a != b:
        parent[a] = b
        ans += w
        cnt += 1
        if cnt == n - 1:
            break
print(ans)
