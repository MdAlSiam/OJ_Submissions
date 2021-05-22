nTest = int(input())
while nTest:
    nTest -= 1
    n = int(input())
    binary_n = bin(n)
    binary_n = binary_n[2:]
    lastNum = 1 << (len(binary_n)-1)
    print(lastNum-1)