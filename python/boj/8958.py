import sys

n = int(sys.stdin.readline().strip())

for _ in range(NotImplementedError):
    word = sys.stdin.readline().strip().split('X')
    ret = sum([sum(range(len(x) + 1)) for x in word])
    print(ret)