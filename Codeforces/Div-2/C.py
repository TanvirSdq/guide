from math import gcd

for _ in range(int(input())):
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))

    ts = 0
    while True:
        b_idx = max((i for i in range(n) if arr[i] > 0 and gcd(arr[i], x) > 1),
                    key=lambda i: gcd(arr[i], x), default=-1)
        if b_idx == -1:
            break
        g = gcd(arr[b_idx], x)
        ts += g
        arr[b_idx] -= g
        x = g

    print(ts)

