n, m = map(int, input().split(" "))
times = [(1<<30) for i in range(n)]
costs = [0 for i in range(n)]

for i in range(m):
    lt, rt, time, cost = map(int, input().split(" "))
    lt -= 1
    rt -= 1
    for j in range(lt, rt+1):
        if time < times[j]:
            times[j] = time
            costs[j] = cost

ans = 0
for i in range(n):
    ans += costs[i]

print(ans)

'''
4 4
1 4 20 5
1 3 21 10
3 3 4 30
3 4 4 20
'''