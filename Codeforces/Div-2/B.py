from collections import Counter
def sortarr():
    n = int(input())
    arr = list(map(int, input().split()))
    count = Counter(arr)
    un = sorted(count.keys(), reverse=True)
    res = []
    while len(res) < n:
        for i in un:
            if count[i] > 0:
                res.append(i)
                count[i] -= 1
                if len(res) == n:
                    break
    print(*res)



if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        sortarr()
