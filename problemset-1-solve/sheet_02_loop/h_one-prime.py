N= int(input())
if N <= 1:
    print("NO")

else:
    prime= True
    for i in range(2,N):
        if N%i == 0:
            prime = False
            break;

if prime:
    print("YES")
else:
    print("NO")