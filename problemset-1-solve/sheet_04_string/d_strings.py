a = input()
b = input()

print(len(a), len(b))
print(a + b)

a_swapped = b[0] + a[1:]  # First char from b, rest from a
b_swapped = a[0] + b[1:]  # First char from a, rest from b

print(a_swapped, b_swapped)
