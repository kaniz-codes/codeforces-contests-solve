N1, N2 = map(int, input().split())

while N1 != N2:
    if N1 > N2:
        N1 -= N2
    else:
        N2 -= N1

print(N1)
