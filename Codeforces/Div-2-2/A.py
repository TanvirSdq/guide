import sys


def solve():
  input_data = sys.stdin.read().split()
  if not input_data:
    return

  t = int(input_data[0])
  idx = 1
  out = []

  for _ in range(t):
    n = int(input_data[idx])
    k = int(input_data[idx + 1])
    idx += 2
    out.append(str(2 * (k - 1) + (1 << (n - k + 1))))

  sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
  solve()


