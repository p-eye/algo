import sys

n = int(sys.stdin.readline().strip())

ret = ["*" * i for i in range(1, n+1)]
print("\n".join(ret))