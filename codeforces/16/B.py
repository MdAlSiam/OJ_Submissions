n, m = map(int, input().split())
rooms = []
for i in range(m):
    t1, t2 = map(int, input().split())
    rooms.append([t1, t2])
rooms.sort(key = lambda x: -x[1])
# print(rooms)

ans = 0

for i in range(len(rooms)):
    takeable = min(n, rooms[i][0])
    ans += takeable*rooms[i][1]
    n -= takeable

print(ans)