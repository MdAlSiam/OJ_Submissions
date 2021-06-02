mod = 1000003

def multiply(n1, n2):
    global mod
    return ((n1%mod)*(n2%mod))%mod

n = int(input())

ans = 1
for i in range(n-1):
    ans = multiply(ans, 3)

print(int(ans))