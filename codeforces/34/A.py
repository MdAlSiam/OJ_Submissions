n = int(input())
ara = [int(i) for i in input().split()]

mindiff = 1 << 30
ans = [-1, -1]
for i in range(n):
    diffhere = abs(ara[i]-ara[(i+1)%n])
    if (diffhere < mindiff):
        mindiff = diffhere
        ans = [i+1, 1+(i+1)%n]

print(ans[0], ans[1])