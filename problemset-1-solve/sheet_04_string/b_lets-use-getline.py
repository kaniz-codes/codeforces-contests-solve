S = input()

pos = S.find("\\")

if pos != -1:
    print(S[:pos])
else:
    print(S)
