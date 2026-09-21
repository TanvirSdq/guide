import sys

def sort():
    input = sys.stdin.read().split()
    tokens = iter(input)
    numbers = int(next(tokens))
    results = []
    for _ in range(numbers):
        n = int(next(tokens))
        s = next(tokens)

        if "10" not in s:
            results.append(0)
            continue

        total_zeros = s.count('0')

        if s[0] ==  "1":
            results.append(total_zeros)
            continue

        
        total_ones = s.count('1')

        left_ones = 0
        right_zeros = total_zeros
        min = total_zeros

        for ch in s:
            if ch == "1":
                left_ones += 1
            else:
                right_zeros -= 1

            if left_ones + right_zeros < min:
                min = left_ones + right_zeros
        results.append(min)

    print("\n".join(map(str, results)))

if __name__ == "__main__":
    sort()


