
def solution(s):
    size = len(s)
    return s.isdigit() and (size == 4 or size == 6)