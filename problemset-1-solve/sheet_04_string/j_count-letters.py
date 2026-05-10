s = input()
n = sorted(set(s))

for ch in n:
    print(ch, ":", s.count(ch))
