import sys

s = sys.stdin.readline().strip()
ret = sum([1 for c in s if c in "aeiou"])
print(ret)
