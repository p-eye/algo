import sys

s = sys.stdin.readline().strip()

print(oct(int(s, 2))[2:])