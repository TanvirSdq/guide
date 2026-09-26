import sys
from collections import Counter


def next_val(x):
  s = 0
  while x > 0:
    d = x % 10
    s += d * d
    x //= 10
  return s


def solve():
  input_data = sys.stdin.read().split()
  if not input_data:
    return

  t = int(input_data[0])
  idx = 1
  out = []

  STEPS = 100

  for _ in range(t):
    n = int(input_data[idx])
    idx += 1

    counts = Counter()
    for _ in range(n):
      val = int(input_data[idx])
      idx += 1

      for _ in range(STEPS):
        val = next_val(val)

      counts[val] += 1

    ans = sum(c * (c - 1) // 2 for c in counts.values())
    out.append(str(ans))

  sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
  solve()
