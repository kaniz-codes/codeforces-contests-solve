n = int(input())

for _ in range(n):
    s, t = input().split()
    p = max(len(s), len(t))
    result = ""
    for i in range(p):
        if i < len(s):
            result += s[i]
        if i < len(t):
            result += t[i]
    print(result)
