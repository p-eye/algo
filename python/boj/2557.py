import sys

n = 1
for _ in range(3):
    n *= int(sys.stdin.readline().strip())

ret = [str(n).count(str(i)) for i in range(10)]
print("\n".join(map(str, ret)))