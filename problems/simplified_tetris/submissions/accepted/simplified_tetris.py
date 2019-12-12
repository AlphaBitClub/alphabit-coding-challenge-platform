D = int(input())
S = int(input())
N = int(input())

if (N == 1):
    print(S)
elif((2*D + S) >= N):
    if ((N % 2) == 0):
        print((4*D + S)//N)
    else:
        if ((2*D) >= S):
            print(S)
        else:
            print((4*D + S)//N)
else:
    print(0)
