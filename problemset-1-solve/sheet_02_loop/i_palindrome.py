N= int(input())
temp = N
rev =0
while temp != 0:
    rem = temp%10
    rev= rev*10+rem
    temp //= 10

print(rev)

if N == rev:
    print("YES")
else:
    print("NO")