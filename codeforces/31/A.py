def main():
    n = int(input())
    ara = [int(i) for i in input().split(" ")]

    for i in range(n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                if (ara[i] == ara[j]+ara[k]):
                    print(i+1, j+1, k+1)
                    return
                elif (ara[j] == ara[i]+ara[k]):
                    print(j+1, i+1, k+1)
                    return
                elif (ara[k] == ara[i]+ara[j]):
                    print(k+1, i+1, j+1)
                    return
    print(-1)

main()